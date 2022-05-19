#include <algorithm>
// Time Complexity:
// - worst: O(nlogn)
// - average: O(nlogn)
// - best: O(nlogn)
// Space Complexity - O(n)

// rebuild max-heap
void heapify(int* arr, const int size, int i) {
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;
    if (left < size && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < size && arr[right] > arr[largest]) {
        largest = right;
    }
    if (largest != i) {
        std::swap(arr[i], arr[largest]);
        heapify(arr, size, largest);
    }
}

void HeapSort(int* arr, const int size) {
    // build a heap
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(arr, size, i);
    }

    // heap sort
    for (int i = size - 1; i >= 0; i--) {
        std::swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

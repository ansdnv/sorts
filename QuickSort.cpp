#include <algorithm>
// Time Complexity:
// - worst: O(n^2)
// - average: O(nlogn)
// - best: O(nlogn)
// Space Complexity:
// - worst: O(n)
// - average: O(logn)

int patritionHoare(int* arr, int low, int high) {
    int pivot = arr[(low + high) / 2];
    int i = low;
    int j = high;
    while (i <= j) {
        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i >= j) {
            return j;
        }
        std::swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

void QuickSortWithBounds(int* arr, const int size, int low, int high) {
    if (low < high) {
        int pivot = patritionHoare(arr, low, high);
        QuickSortWithBounds(arr, size, low, pivot - 1);
        QuickSortWithBounds(arr, size, pivot + 1, high);
    }
}

void QuickSort(int* arr, const int size) {
    QuickSortWithBounds(arr, size, 0, size - 1);
}
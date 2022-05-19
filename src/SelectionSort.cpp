#include <algorithm>
// Time Complexity:
// - worst: O(n^2)
// - average: O(n^2)
// - best: O(n^2)
// Space Complexity - O(1)

void SelectionSort(int* arr, const int size) {
    int min_index;
    for (int i = 0; i < size - 1; i++) {
        min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index])
                min_index = j;
        }
        std::swap(arr[i], arr[min_index]);
    }
}

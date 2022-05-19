#include <algorithm>
// Time Complexity:
// - worst: O(n^2)
// - average: O(n^2)
// - best: O(n)
// Space Complexity - O(1)

void BubbleSort(int* arr, const int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

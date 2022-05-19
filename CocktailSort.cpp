#include <algorithm>
// Time Complexity:
// - worst: O(n^2)
// - average: O(n^2)
// - best: O(n)
// Space Complexity - O(1)

void CocktailSort(int* arr, const int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        for (int i = left; i < right; i++) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
            }
        }
        right--;

        for (int i = right; i > left; i--) {
            if (arr[i] < arr[i - 1]) {
                std::swap(arr[i], arr[i - 1]);
            }
        }
        left++;
    }
}
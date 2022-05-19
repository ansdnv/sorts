#include <algorithm>
// Time Complexity:
// - worst: O(n^2)
// - average: Omega(n^2/2^p) (p is a number of increment)
// - best: O(nlogn)
// Space Complexity - O(1)

void CombSort(int* arr, const int size) {
    const double factor = 1.247;
    int gap = size - 1;
    while (gap >= 1) {
        for (int i = 0; i + gap < size; i++) {
            if (arr[i] > arr[i + gap]) {
                std::swap(arr[i], arr[i + gap]);
            }
        }
        gap /= factor;
    }
}

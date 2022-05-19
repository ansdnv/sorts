// Time Complexity:
// - worst: O(n^2)
// - average: O(n^2)
// - best: O(n)
// Space Complexity - O(1)

void InsertionSort(int* arr, const int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
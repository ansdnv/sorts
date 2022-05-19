#include <algorithm>
// Time Complexity:
// - worst: O(nlogn)
// - average: O(nlogn)
// - best: O(nlogn)
// Space Complexity - O(n)

// Merges two subarrays: leftArr[left..mid] + rightArr[mid + 1..right]
void merge(int* arr, const int left, const int mid, const int right) {
    //Create and fit subarrays
    const int size_leftArr = mid - left + 1;
    const int size_rightArr = right - mid;
    int* leftArr = new int[size_leftArr];
    int* rightArr = new int[size_rightArr];
    for (int i = 0; i < size_leftArr; i++)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < size_rightArr; j++)
        rightArr[j] = arr[mid + 1 + j];

    // Initial indexes
    int i_leftArr = 0;
    int i_rightArr = 0;
    int i_MergedArr = left;
    // Merging
    while (i_leftArr < size_leftArr && i_rightArr < size_rightArr) {
        if (leftArr[i_leftArr] <= rightArr[i_rightArr])
            arr[i_MergedArr++] = leftArr[i_leftArr++];
        else 
            arr[i_MergedArr++] = rightArr[i_rightArr++];
    }

    // Copy the remaining elements of left and right subarrs, if there are any
    while (i_leftArr < size_leftArr)
        arr[i_MergedArr++] = leftArr[i_leftArr++];
    while (i_rightArr < size_rightArr)
        arr[i_MergedArr++] = rightArr[i_rightArr++];

    delete[]rightArr;
    delete[]leftArr;
}

void MergeSortWithBounds(int* arr, const int left, const int right)
{
    if (left < right) {
        int mid = left + (right - left) / 2;
        MergeSortWithBounds(arr, left, mid);
        MergeSortWithBounds(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void MergeSort(int* arr, const int size) {
    MergeSortWithBounds(arr, 0, size - 1);
}

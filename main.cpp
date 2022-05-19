#include <iostream>
#include "BubbleSort.h"
#include "CocktailSort.h"
#include "CombSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "QuickSort.h"
#include "MergeSort.h"
#include "HeapSort.h"

int* createArr(const int size) {
    srand(time(0));
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % size;
    }
    return arr;
}

void printArr(int* arr, const int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}

int main()
{
    const int size = 5;
    int* arr = createArr(size);
    printArr(arr, size);
    std::cout << "-> ";
    MergeSort(arr, size);
    printArr(arr, size);
}

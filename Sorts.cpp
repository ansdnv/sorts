// Sorts.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

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

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

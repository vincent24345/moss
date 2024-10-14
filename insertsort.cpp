// File: insertion_sort_recursive.cpp
#include <iostream>
using namespace std;

// Function to perform recursive insertion sort
void insertionSortRecursive(int arr[], int n) {
    // Base case: If the array has 1 or 0 elements, it's already sorted
    if (n <= 1) {
        return;
    }

    // Recursively sort the first n-1 elements
    insertionSortRecursive(arr, n - 1);

    // Insert the nth element in its correct position in the sorted array
    int last = arr[n - 1];
    int j = n - 2;

    // Shift elements of arr[0..n-1], that are greater than last, to one position ahead
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    printArray(arr, n);

    insertionSortRecursive(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}

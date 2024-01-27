/*
Brendan Gorman
*/
#include <iostream>
using namespace std;

// Part A
void populateArray(int arr[], int size) {
    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
}

// Part B
void printArray(int* arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << *arr[i] << " ";
    }
    cout << endl;
}

// Part C
void swapPointers(int* &ptr1, int* &ptr2) {
    int* temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
}

// Part D
void sortPointers(int* ptrArr[], int size) {
    // Simple sorting algorithm (Bubble Sort)
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (*ptrArr[j] > *ptrArr[j + 1]) {
                swapPointers(ptrArr[j], ptrArr[j + 1]);
            }
        }
    }
}

int main() {
    const int size = 4;

   
    int my_ints[size];
    populateArray(my_ints, size);

    
    int* my_ptrs[size];
    for (int i = 0; i < size; ++i) {
        my_ptrs[i] = &my_ints[i];
    }

    
    cout << "Initial state of my_ptrs:\n";
    printArray(my_ptrs, size);

    
    sortPointers(my_ptrs, size);

    
    cout << "State of my_ptrs after sorting based on integers:\n";
    printArray(my_ptrs, size);

   
    cout << "Values pointed to by each pointer in my_ptrs:\n";
    for (int i = 0; i < size; ++i) {
        cout << *my_ptrs[i] << " ";
    }
    cout << endl;

    return 0;
}

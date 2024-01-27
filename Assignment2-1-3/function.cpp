/*
Brendan Gorman
*/
#include <iostream>

using namespace std;

// Function to swap the values of two integers using pointers
void swapInts(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    // Declare variables to store user input
    int num1, num2;

    // Get user input for num1
    cout << "Enter the first integer: ";
    cin >> num1;

    // Get user input for num2
    cout << "Enter the second integer: ";
    cin >> num2;

    // Display the original values
    cout << "Original values: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Call the swapInts function to swap the values
    swapInts(&num1, &num2);

    // Display the swapped values
    cout << "Swapped values: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}



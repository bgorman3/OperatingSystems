//
//  QuickSort_99999.cpp
//  (Replace 99999 with your Student ID)
//
//  Created by Bahamon, Julio on 6/25/19.
//  UNC Charlotte
//  Copyright © 2019 Bahamon, Julio. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

// Declaring a new struct to store patient data
struct patient {
    int age;
    char name[20];
    float balance;
};

// Function to display the patient list
void displayPatientList(struct patient patient_list[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Name: " << patient_list[i].name << ", Age: " << patient_list[i].age << ", Balance: $" << patient_list[i].balance << endl;
    }
}

// Function to compare two patients by age
int comparePatientsByAge(const void *a, const void *b) {
    return ((struct patient*)a)->age - ((struct patient*)b)->age;
}

// Function to compare two patients by balance
int comparePatientsByBalance(const void *a, const void *b) {
    if (((struct patient*)a)->balance < ((struct patient*)b)->balance) return -1;
    else if (((struct patient*)a)->balance > ((struct patient*)b)->balance) return 1;
    else return 0;
}

// Function to compare two patients by name
int comparePatientsByName(const void *a, const void *b) {
    return strncmp(((struct patient*)a)->name, ((struct patient*)b)->name, 20);
}

int main() {
    int total_patients = 6; // Increased to accommodate the new entry
    
    // Storing some test data
    struct patient patient_list[6] = {
        {25, "Juan Valdez   ", 1250},
        {15, "James Morris  ", 2100},
        {32, "Tyra Banks    ", 750},
        {62, "Mario O'Donell", 375},
        {53, "Pablo Picasso ", 615}
        // TODO: Add a new entry for user input
    };
    
    // TODO: Prompt user for input and add a new entry to patient_list
    
    cout << "Patient List: " << endl;
    displayPatientList(patient_list, total_patients); // Display the original list
    
    cout << endl;
    
    cout << "Sorting by Age..." << endl;
    qsort(patient_list, total_patients, sizeof(struct patient), comparePatientsByAge); // Sorting by age
    cout << "Patient List - Sorted by Age: " << endl;
    displayPatientList(patient_list, total_patients); // Display sorted list
    
    cout << endl;
    
    cout << "Sorting by Balance..." << endl;
    qsort(patient_list, total_patients, sizeof(struct patient), comparePatientsByBalance); // Sorting by balance
    cout << "Patient List - Sorted by Balance Due: " << endl;
    displayPatientList(patient_list, total_patients); // Display sorted list
    
    cout << endl;
    
    cout << "Sorting by Name..." << endl;
    qsort(patient_list, total_patients, sizeof(struct patient), comparePatientsByName); // Sorting by name
    cout << "Patient List - Sorted by Name: " << endl;
    displayPatientList(patient_list, total_patients); // Display sorted list
    
    cout << endl;
    
    return 0;
}

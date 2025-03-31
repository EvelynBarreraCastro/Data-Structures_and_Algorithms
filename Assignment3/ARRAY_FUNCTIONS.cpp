#include <iostream>
#include "ARRAY_FUNCTIONS.h"

using namespace std;

// Function to take input for an integer array
void inputArray(int arr[], int size) {
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

// Function to take input for a double array
void inputArray(double arr[], int size) {
    cout << "Enter " << size << " numbers (double): ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

// Function to find the largest integer in an array
int maxInArray(int arr[], int size) {
    int maxVal = arr[0]; // Assume first element is the largest
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i]; // Update max if a larger value is found
        }
    }
    return maxVal;
}

// Function to find the largest double in an array
double maxInArray(double arr[], int size) {
    double maxVal = arr[0]; // Assume first element is the largest
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i]; // Update max if a larger value is found
        }
    }
    return maxVal;
}

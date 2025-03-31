/**
 * @author: Evelyn Barrera Castro (e.barreracastro@wsu.edu)
 * @description: Write a template function called max5() that takes as its argument an array of 5 items 
 * (the type will be determined by the template) and returns the largest item of the array 
 * (Assume that the user always sends in an array with at least 5 elements). In your main function test 
 * this template function against an array of 5 integers an array of 5 doubles.
 * 
 * compiling instructions: g++ -o Largest_Number Largest_Number.cpp finally run the executable: ./Largest_Number
 */

#include <iostream>
#include "ARRAY_FUNCTIONS.h"

using namespace std;

int main() {
    int intArr[5];
    double doubleArr[5];

    // Get user input for both arrays
    inputArray(intArr, 5);
    inputArray(doubleArr, 5);

    // Find the largest value in both arrays
    int maxInt = maxInArray(intArr, 5);
    double maxDouble = maxInArray(doubleArr, 5);

    // Display the results
    cout << "Largest integer value: " << maxInt << endl;
    cout << "Largest double value: " << maxDouble << endl;

    return 0;
}


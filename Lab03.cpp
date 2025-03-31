#include <iostream>
#include <iomanip>
using namespace std; 

int main () {
    int max_val = 0;          // To store the maximum value
    double average;           // To store the average
    int count = 0;            // To count the number of valid inputs
    int input;                // To take input from the user
    int sum = 0;              // To calculate the sum of inputs
    
     
    while (0 <= input) {
        if (input > 0 ) {
            break;
        }
        sum += input;         // Add input to the sum
        count++;              // Increment the count of valid inputs
    
    if (input > max_val) {
        max_val = input;  // updates the new max per iteration
    }
    if (count > 0) {
        average = static_cast<double>(sum) / count;
    } else {
        average = 0.0;
    }

    // Displaying the maximum value and average
    cout << fixed << setprecision(2);
    cout << max_val << " " << average << endl;


    return 0; 

} }
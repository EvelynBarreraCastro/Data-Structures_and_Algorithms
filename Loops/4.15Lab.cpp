/*
Statistics are often calculated with varying amounts of input data. 
Write a program that takes any number of non-negative integers as input, 
and outputs the max and average. A negative integer ends the input and 
is not included in the statistics. Assume the input contains at least one non-negative integer.
Output each floating-point value with two digits after the decimal point, which can be achieved 
by executing cout << fixed << setprecision(2); once before all other cout statements.

Ex: 
When the input is:15 20 0 3 -1
The output is: 20 9.50
*/
 
#include <iostream>   // For input and output operations
#include <iomanip>    // For setting the precision of floating-point numbers
using namespace std;

int main() {
    int num, max_value;     // 'num' stores the current input number, 'max_value' stores the maximum value
    double sum = 0;         // To accumulate the sum of all non-negative numbers
    int count = 0;          // To count the number of non-negative numbers

    // Set the precision for floating-point output to 2 decimal places
    cout << fixed << setprecision(2);

    // Read the first number to initialize max_value
    cin >> num;
    max_value = num;        // Initialize max_value with the first non-negative number

    // Process inputs until a negative number is encountered
    while (num >= 0) {
        sum += num;         // Add the current number to the sum
        count++;            // Increment the count of non-negative numbers
        
        // Update max_value if the current number is greater
        if (num > max_value) {
            max_value = num;
        }

        // Read the next number
        cin >> num;
    }

    // Calculate the average by dividing the sum by the count of numbers
    double average = sum / count;

    // Output the maximum value and the average
    cout << max_value << " " << average << endl;

    return 0; 
}

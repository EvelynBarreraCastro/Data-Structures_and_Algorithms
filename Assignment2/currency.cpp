/**
 * @author: Evelyn Barrera Castro (e.barreracastro@wsu.edu)
 * @description: This program reads up to 10 currency values into an array of doubles. 
 * However, the program will exit if the value entered is not a number. At the end the program will display
 * the average of the values entered, and how many of the values entered into the array are larger than the average.
 * 
 * compiling instructions: g++ -o currency currency.cpp finally run the executable: ./currency
 */

#include <iostream> 
#include <cmath>
#include <iomanip> 

using namespace std; 

int main () {
    double average = 0;             // Average value
    double currency [10] = { };     // Array to store up to 10 currency values
    double above_Average = 0;       // Counter for values above average
    int count = 0;                  // Tracks the number of valid inputs 
    double sum = 0;                 // Sum of entered values 


    // User display: 
    cout <<  "Enter up to 10 currency values (enter a non-number to stop): " << endl; 
   
    // loop: while count is less than 10 and input fo
    while (count < 10 && cin >> currency[count]) {
        sum = sum + currency[count];
        count++;
    }

    // calculates the average
    if (count > 0) {
        average = sum / count;
    }

    // counts the values that are above average 
    for (int i =0; i < count; i++) {
        if (currency[i] > average) {
            above_Average++;
        }
    }

    // Displays the results 
    cout << fixed << setprecision(2); 
    cout << "Average: " << average << endl;
    cout << "Number of values above average: " << above_Average << endl;


    return 0; 
}
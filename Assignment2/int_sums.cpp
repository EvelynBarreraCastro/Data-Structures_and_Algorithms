/**
 * @author: Evelyn Barrera Castro (e.barreracastro@wsu.edu)
 * @description: This program will prompt the users to enter two integers. 
 * Once the user enters the numbers, the program will calculate and print  
 * the sum of all the integers between and including the 2 integers entered.
 * 
 * compiling instructions: g++ -o int_sums int_sums.cpp finally run the executable: ./int_sums
 */

#include <iostream> 
using namespace std; 

int main () {

    int x, y; 
    int start, end; 
    int sum = 0; 

    cout << " Please select two integers: " << endl; 
    cin >> x >> y; 

    // Store original values to display later
    start = x, end = y;

    for (  ; x <=y; x++) {
        sum = sum + x; 
    }


    cout << "Your total sum between " << start << " and " << end << " is " << sum; 



    return 0; 
}
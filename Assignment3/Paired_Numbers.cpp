/**
 * @author: Evelyn Barrera Castro (e.barreracastro@wsu.edu)
 * @description: This program prompts the user for 2 non zero numbers in order to find the geometric and harmonic solutions. 
 * The program will continue to do an infinite loop until one of the numbers entered is a zero or both are zero.
 * 
 * compiling instructions: g++ -o Paired_Numbers Paired_Numbers.cpp finally run the executable: ./Paired_Numbers
 */

#include <iostream> 
#include "MATH_FUNCTIONS.h"

using namespace std; 


int main ( ) {
    double x, y; 

    do{

        cout << "\nEnter Pairs of Numbers (0 to quit): "; 
        cin >> x >> y; 

        if ( x==0 || y==0 ) {
            cout << "Thank you for your response." << endl; 
            break; 
        }

        cout << "Harmonic mean: " << harmonic(x,y) << endl; 
        cout << "Geometric mean: " << geometric(x,y); 

      }while (true); 


    return 0; 
}
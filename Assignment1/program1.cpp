/**
 * @author: Evelyn Barrera Castro (e.barreracastro@wsu.edu)
 * @description: Write a short program that asks a user for their 
 * height in integer inches and then converts height to feet and inches. 
 * Use a named constant to store the conversion factor from inches to feet.
 * 
 * compiling instructions: g++ -o program1 program1.cpp finally run the executable: ./program1
 */

#include <iostream> 
using namespace std; 

int main () {

    // Assigned variable names with datatypes
    int height;
    int feet;
    int inches;

    // console output to their user a question in regard to their height
    cout << "What is your current height in inches?" << endl; 
    // saved response
    cin >> height; 

    // mathamatical conversions for feet and inches
    feet = height / 12; 
    inches = height % 12; 

    // displaying user their height in feet and inches
    cout << "Your current height is " << feet << " feet and " << inches << " inches." << endl; 


    return 0; 
}
 


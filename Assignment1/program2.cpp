/**
 * @author: Evelyn Barrera Castro (e.barreracastro@wsu.edu)
 * @description: Write a short program that asks a user for their height 
 * in feet and inches, and their weight in pounds (use 3 variables to store 
 * the information). Have the program calculate and report the BMI for the user. 
 * For calculating the BMI, first convert the height from feet and inches into inches. 
 * Then convert the height in inches to meters by multiplying by 0.0254. Then convert 
 * weight in pounds into mass in kilograms by dividing by 2.2. Finally, compute the BMI 
 * by dividing the mass in kilograms by the square of the height in meters. Use named constants 
 * to represent the conversion factors (IE const float METER_CONVERSION_FACTOR = 0.0254;).
 * 
 * compiling instructions: g++ -o program2 program2.cpp, finally run the executable: ./program2
 * 
 */

#include <iostream> 
using namespace std; 


int main () {

    double feet, inches, weight; 
    double heightMeters, BMI; 
    const float METER_CONVERSION_FACTOR = 0.0254;

    // promting the user for their height 
    cout << "what is your current height? " << endl; 
    cout << "feet: "; 
    cin >> feet;
    cout << "inches: ";
    cin >> inches;

    // promting the user for their weight and storing it 
    cout << "what is your current weight in pounds?" << endl; 
    cin >> weight; 

    // converting feet into inches 
    feet = feet * 12; 
    inches = inches + feet; 

    // converting the height in inches to meters
    heightMeters = inches * METER_CONVERSION_FACTOR;

    // pounds to kilograms
    weight = weight / 2.2; 

    // compute BMI 
    BMI = weight / (heightMeters * heightMeters); 

    // tell user their BMI 
    cout << "your BMI is " << BMI << endl; 


    return 0; 
}
 
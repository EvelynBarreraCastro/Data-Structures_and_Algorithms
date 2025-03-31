/**
 * @author: Evelyn Barrera Castro (e.barreracastro@wsu.edu)
 * @description: This program will display 2 investment plans both plans will have the same principle of $100. 
 * In the first investment plan the principle has a simple interest rate of 10% annually ($10 per year). 
 * In the second investment plan the principle has a compound interest rate of 5% of the current balance annually. 
 * At the end of the program will display current total values given the amount of years and how many years 
 * it would take for the second investment to exceed the value of the first. 
 * 
 * compiling instructions: g++ -o interest interest.cpp finally run the executable: ./interest
 */


#include <iostream> 
#include <cmath>
#include <iomanip> 

using namespace std; 


/*  Key Note for myself only: (Teaching moment)
    Function: & (Pass-by-Reference):
    The & symbol means pass-by-reference instead of pass-by-value. 
    This allows the function to modify the original compound_value 
    variable from the main() function, rather than working with a copy.

    As for "int years": 
    This represents the number of years the interest is being compounded.
    It’s passed by value (no &), which is fine because we're only reading 
    this value, not modifying it.
*/

// This function was designed to calculate simple interest 
// the formula is 100 + (interest rate times 100 times years)
void simpInterest (double &simple_value, int years) {

        simple_value = 100 + (0.10 * 100 * years);
    }

// The function is designed to calculate compound interest
// the formula is 100 times (1 + 0.5) to the power of years
void compInterest (double &compound_value, int years) {

        compound_value = 100 * pow((1 +0.05), years); 
    }

int main () {

    // Assigned datatypes to variables
    int years = 0; 
    double simple_value = 0, compound_value = 0; 

    // Set the precision to 2 decimal places
    cout << fixed << setprecision(2);
   
    // Prompts user to select the number of years & stores value into "years"
    cout << "Calculating Simple vs Compound Intrest Rate, select number of years: "; 
    cin >> years; 

    // calling the function to perform the calculations: 
    simpInterest(simple_value, years); 
    compInterest(compound_value, years); 

    // Displays the calculations: 
    cout << "Simple Interest Rate: $" << simple_value << endl; 
    cout << "Compound Interest Rate: $ " << compound_value << endl; 

    // Loop designed to stop until compound interest rate surpasses the simple interest rate while finding the years it takes
    while (compound_value <= simple_value) {

       years++;  // adds to year count per iteration
       // calling the function to perform the calculations: 
        simpInterest(simple_value, years); 
        compInterest(compound_value, years); 

    }

    // Displays the number of years it will take until the compound 
    // interest rate surpasses the simple interest rate & displays the amount $
    cout << "\nIt will take " << years << " years before compound interest surpasses simple interest." << endl; 
    cout << "Simple Interest Rate: $" << simple_value << endl; 
    cout << "Compound Interest Rate: $ " << compound_value << endl; 

    return 0; 
}
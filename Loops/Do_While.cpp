// Introduction to Do while Loop
// A short simple guessing

#include <iostream> 
using namespace std; 

int main () {

int number;

do 
{
    cout << "Enter a number greater than 10: ";
    cin >> number;
} while (number <= 10);
    cout << "Great! You entered " << number << endl;

return 0; 
}
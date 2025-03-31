// Introduction to Exception Handling 

#include <iostream> 
using namespace std;

int main () {

    // instantiate a string saying Evelyn
    string word = "Evelyn";

    // basically saying: HEY! Let's try to find the character (#), given the string
    try {
        cout << word.at(4) << endl;
    }
    // this line of code will only play out if the character number is out of range! 
    // Try running the code without this specific block of code & see the effects! 
    catch (out_of_range& e) // or (...)
    {
       cout << "Exception Thrown!" << endl; 
    }



    return 0;
}
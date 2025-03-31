// This program can't find its variable.
#include <iostream>
using namespace std;

int main()
{
    int value = 100; //This line of code use to be bellow the following line.
    //When this occurs the program can't find its defined variable, to fix this I wrote
    //the line of code above the following line.
	cout << value;   // ERROR! value has not been defined yet!
	

	return 0;
}

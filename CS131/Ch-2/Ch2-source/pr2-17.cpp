// This program displays the size of various data types.
#include <iostream>
using namespace std;

int main()
{
	string apple; // try replacing with int, char, double, float, and see how the output changes.

	cout << "The size of a short integer is " << sizeof(short) 
	     << " bytes.\n";
		  
	cout << "The size of a long integer is "  << sizeof(long) 
	     << " bytes.\n";
		  
	cout << "An apple can be eaten in " << sizeof(apple)
	     << " bytes!\n";
	
	return 0;
}

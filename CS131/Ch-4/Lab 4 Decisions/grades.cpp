// Programmer: Evelyn Barrera Castro
// If I input -12 my output is "Process finished with exit code 0".

// Purpose: This program prints "You Pass" if a student's average is 60 or
// higher and prints "You Fail" otherwise

// Date modified: 02/05/2024

//Compiler used: CLion

#include <iostream>
using namespace std;

int main()
{
	float average;	// holds the grade average

	cout << "Input your average:" << endl;
	cin >> average;

	if (average >= 100)
		cout << "The have entered Invalid data" << endl;

    else if (average >= 90)
        cout << "You have received an A" << endl;

    else if (average >= 80)
        cout << "You have received an B" << endl;

    else if (average >= 60)
        cout << "You Pass" << endl;

    if (average >= 0)
        cout << "You Fail" << endl;

	return 0;
}
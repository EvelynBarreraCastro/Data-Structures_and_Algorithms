// Programmer: Evelyn Barrera Castro

// Purpose: This program will output the circumference and area of the circle with a given radius.

// Date modified: 02/02/2024

//Compiler used: CLion


#include <iostream>
using namespace std;

const double PI = 3.14;
const double RADIUS = 5.4;

int main()
{
	float area;							// definition of area of circle
	float circumference;			// definition of circumference

    circumference = 2 * PI * RADIUS;	// computes circumference
	area = PI * RADIUS * RADIUS;							// computes area

    // Output the circumference
    cout << "Circumference of the circle: " << circumference << endl;

    // Output the area
    cout << "Area of the circle: " << area << endl;

	return 0;
}
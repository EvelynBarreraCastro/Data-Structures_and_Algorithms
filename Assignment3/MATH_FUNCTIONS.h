// This file will contain 2 functions harmonic and geometric 

#include <cmath> // It's important to include cmath in the file that has the actual calculations not in the main file. 


// Calls for the harmonic calculations 
// (2 times x times y) divided by (x plus y)
double harmonic(double x, double y) {
    return 2.0 * x * y / (x + y);
}

// Calls for the geometric calculations 
// The square of x times y.
double geometric(double x, double y) {
    return sqrt(x * y);
}


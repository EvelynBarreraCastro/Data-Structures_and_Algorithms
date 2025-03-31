/*
    This program reads a list of city names and their populations (ending with -1), 
    increments the population by 1000, and handles any input errors by setting the 
    population to 0 when invalid input is encountered.
*/


#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    string city;
    int population;

    while (true) {
        cin >> city;
        if (city == "-1") {
            break;
        }

        try {
            cin >> population;
            if (cin.fail()) {
                throw ios_base::failure("Invalid input for population.");
            }
            cout << city << " " << (population + 1000) << endl;
        } catch (ios_base::failure& e) {
            // Clear failbit to be able to use cin again
            cin.clear();
            // Throw away the rest of the failed input line from cin buffer
            string garbage;
            getline(cin, garbage);
            cout << city << " 0" << endl;
        }
    }

    return 0;
}

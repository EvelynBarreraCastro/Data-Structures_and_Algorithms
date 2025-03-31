// Programmer: Evelyn Barrera Castro
// Purpose: E-Book Sales program: prompts user to enter the number of e-books ordered.
// (uses a loop to validate the number of books entered, it must be a positive value.)
// Date modified: 02/15/2024
// Compiler used: CLion


#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    // Variables
    int numBooks;
    double pricePerBook, totalPrice, discount, finalPrice, salesTax, finalPriceWithTax;

    // Get input and validate
    do {
        cout << "Enter the number of e-books ordered: ";
        cin >> numBooks;
        if (numBooks <= 0) {
            cout << "Please enter a positive value." << endl;
        }
    } while (numBooks <= 0);

    // Calculate total price based on the number of books
    if (numBooks < 10) {
        pricePerBook = 10.5;
    } else if (numBooks >= 10 && numBooks <= 20) {
        pricePerBook = 8.5;
    } else if (numBooks >= 21 && numBooks <= 30) {
        pricePerBook = 6.5;
    } else {
        pricePerBook = 5.5;
    }

    totalPrice = numBooks * pricePerBook;

    // Apply discount if total price is greater than $200
    if (totalPrice > 200) {
        discount = 0.15 * totalPrice;
        totalPrice -= discount;
    }

    // Calculate sales tax
    salesTax = 0.086 * totalPrice;

    // Calculate final price with tax
    finalPriceWithTax = totalPrice + salesTax;

    // Display final price to the screen
    cout << fixed << setprecision(2);
    cout << "Total Sales Price: $" << finalPriceWithTax << endl;

    // Write to disk
    ofstream outputFile("sales.txt");
    if (outputFile.is_open()) {
        outputFile << fixed << setprecision(2);
        outputFile << "Total Sales Price: $" << finalPriceWithTax << endl;
        outputFile.close();
        cout << "Sales data has been written to sales.txt." << endl;
    } else {
        cout << "Unable to open file to write sales data." << endl;
    }

    return 0;
}

// Programmer: Evelyn Barrera Castro
// Purpose: This program illustrates the use of logical operators
// Date modified: 02/05/2024
//Compiler used: CLion


#include <iostream>
using namespace std;

int main()
{
    char year;
    float gpa;

    cout << "What year student are you ?" << endl;
    cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)"
         << endl << endl;
    cin >> year;

    cout << "Now enter your GPA" << endl;
    cin >> gpa;


        //Step 1: rewrite gpa >= 2.0 using the NOT operator which is !
        //this step gives us: if (!(gpa >= 2.0) && year == '4')
        //Step 3: Replacing.
    if (!(gpa >= 2.0) && year == '4')
     cout << "It is time to graduate soon" << endl;


    //Step 3: Replace & Explain. Students with a GPA >= 2.0 or seniors will graduate.
    // Students who are not seniors and have a GPA less than 2.0 will not graduate


        //Step 2: Replace year != '4' with year < 4 or year <= 3.
        //This step is valid because it allows any year less than 4.
        // Result: else if (year < '4' || gpa <2.0)
    else if (year < '4' || gpa < 2.0)
        cout <<"You need more schooling" << endl;

    else
        cout << "Invalid input or graduation not determined." << endl;


    return 0;



}




/* Programmer: Evelyn Barrera Castro
Purpose: The program's purpose is to identify the letter selected by the user.
Date modified: 02/23/2024
Compiler used: CLion
Step 2: Not user-friendly as: there's a lack of instructions/explanation, making it confusing to user.*/


#include <iostream>
using namespace std;

int main()
{
    //Modified: Providing an initial explanation + instruction.
    cout << "Hello! This program will ask you to enter a letter. When ready to exit the program please select 'x'. "
         << endl;


    char letter = 'a';
	while (letter != 'x') {


        cout << "Please enter a letter" << endl;
		cin >> letter;

		cout << "The letter you entered is " << letter << endl;
	}






	return 0;
}
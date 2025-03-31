#include <iostream>
#include <fstream>
#include <ios>
#include <string>
using namespace std;

int main() {
   string widthDataFileName;
   ifstream widthStream;
   double inValue;

   cin >> widthDataFileName;
   widthStream.exceptions(ifstream::failbit | ifstream::badbit);

   /* Your code goes here */;

   try {
      widthStream.open(widthDataFileName);

      widthStream >> inValue;
      cout << "Value read from " << widthDataFileName << ": " << inValue << endl;
   }
   catch (ios_base::failure& excpt) {
      cout << "Error: " << excpt.what() << endl;
   }

   // Closes the opened file
   if (widthStream.is_open()) {
      widthStream.close();
   }

   return 0;
}
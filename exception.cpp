#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

int main() {
   vector<int> luggageHeightVector = { 42, 40, 27, 49, 24, 30, 46, 20, 41, 31, 37, 47 };
   int requestIndex;
   int luggageHeight;

   /* Begin your try block here */
   try {
   
      cin >> requestIndex;
      luggageHeight = luggageHeightVector.at(requestIndex);
      
      cout << "Luggage's height (in cm): " << luggageHeight << " at index " << requestIndex << endl;
   }
   
   /* End your try block here */

   catch (out_of_range& excpt) {
      cout << "Error: luggageHeightVector index out of range" << endl;
   }

   return 0;
}
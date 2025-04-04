#include <iostream> 
using namespace std; 

int main() {

    int arraySize = 7;
    int A[7] = {38, 27, 43, 3, 9, 82, 10};

    int low = 0; 
    int high = arraySize - 1; 

    mergeSort(A, low, high); 

    for (int 1 = 0; i < 7; i++) {
        cout << A[i];

        return 0;
    }
}
#include <iostream>
#include "ArrayUtils.h"
#include "sorting_algorithms.h"
using namespace std;
#include <chrono> // used to measure execution time of a function
using namespace std::chrono;


int main(int argc, char* argv[])
{
    cout << endl;
    // Replace the body of the main function with the code to create arrays and time the sorts.

    /*int arrayCount = 20;
    int originalArray [20] = {4, 89, 1, 12, 6, 27, 9, 4, 77, 94, 69, 68, 7, 27, 21, 13, 2, 8, 16, 3};
    
    // Make copies for each algorithm 
    int arrayForMerge[arrayCount];
    int arrayForBubble[arrayCount];

    // Copy contents to both arrays 
    for (int i = 0; i < arrayCount; i++) {
        arrayForMerge[i] = originalArray[i];
        arrayForBubble[i] = originalArray[i];
    }

    // selectionSort(array, arrayCount);
    // insertionSort(array, arrayCount);
    */ 
    
    for (int size = 1000; size <= 100000; size *= 10) {

        int *array = generateRandomIntArray(size);

        cout << "Array size is: " << size << endl;
            
        //cout << "Given array: "; 
       // printIntArray(size, array);
    
        int *arrayForMerge = generateIntArrayCopy(size,  array); 
        int *arrayForBubble = generateIntArrayCopy(size,  array); 

        // ------ Merge Sort Algorithm -------
        auto startMerge = high_resolution_clock::now();  // start Merge Sort time point
        mergeSort(arrayForMerge, size);            // call Merge Sort function 

        auto stopMerge = high_resolution_clock::now();   // Stop Merge Sort time point
        auto duration = duration_cast<microseconds>(stopMerge - startMerge);    // Calculate Merge Sort duration 
        cout << "Time taken by Merge Sort Algorithm is: " << duration.count() << " microseconds" << endl; // Output Merge Sort duration 
        //cout << "The sorted array is: ";                                                                 // Display final sorted array
        //printIntArray(size, arrayForMerge);

        // ------ Bubble Sort Algorithm -------
        auto begin = high_resolution_clock::now();
        bubbleSort (arrayForBubble, size);
        auto end = high_resolution_clock::now();
        auto time = duration_cast<microseconds>(end - begin);
        cout << "Time taken by Bubble Sort Algorithm is: " << time.count() << " microseconds" << endl; 
        //cout << "The sorted array is: "; 
        //printIntArray(size, arrayForBubble);

        cout << endl << endl;
    }

    return 0;
}


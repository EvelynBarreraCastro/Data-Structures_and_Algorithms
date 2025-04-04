#pragma once
#include "ArrayUtils.h"

#include <chrono> // used to measure execution time of a function
using namespace std::chrono;


void selectionSort(int* array, int arrayCount)
{
    for(int i = 0; i < arrayCount-1; i++) // O(N^2)
    {
        int minIndex = i;
        for(int j = i + 1; j < arrayCount; j++)
        {
            if(array[minIndex] > array[j])
                minIndex = j;
        }

        if(minIndex == i)
            continue;

        // Post condition minIndex is the index of the smallest element in the array
        array[minIndex] = array[minIndex] + array[i];
        array[i] = array[minIndex] - array[i];
        array[minIndex] = array[minIndex] - array[i];
    }
}

void insertionSort(int* array, int arrayCount)
{

    for (int i = 1; i < arrayCount; i++) // O(N^2)
    {

        for (int j = i; j > 0 && array[j] < array[j - 1]; j--)
        {
            int temp = array[j];
            array[j] = array[j - 1];
            array[j - 1] = temp;
        }
    }
}

void bubbleSort(int* array, int arrayCount)
{
    bool swapped;
    do
    {
        swapped = false;
        for (int i = 0; i < (arrayCount - 1); i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = true;
            }
        }
    } while (swapped);
}


void mergeSort(int* array, int arrayCount)
{ 
    if (arrayCount == 1)
        return;

    int leftCount = arrayCount / 2;
    int rightCount = arrayCount - leftCount;

    // Create 2 subarrays
    // Copy the elements from array into subarrays
    int* leftArray = generateIntArrayCopy(leftCount, array);
    int* rightArray = generateIntArrayCopy(rightCount, array + leftCount);

    // Call mergeSort on the subarrays
    mergeSort(leftArray, leftCount);
    mergeSort(rightArray, rightCount);


    // Now that we have returned from the mergeSort calls, the subarrays should be sorted
    // Perform the merge process
    // Left as an exercise for the student
    // These letters (i,j,k) are need to compare and conquer 
    // These indexes are used to track positions in the left, right, and merged arrays
    int i = 0, j = 0, k = 0; 

    // condition: As long as the value of left count is greater than 0
    //            and the value of right count is greater than 0
    while (i < leftCount && j < rightCount) {

            // if the count of leftArray is less than or equal to right array
        if (leftArray[i] <= rightArray[j]) {
            
            // assign k value to left Array values 
            array[k++] = leftArray[i++];
        } else {
            // assign k value to right Array values 
            array[k++] = rightArray[j++];
        }
    }

    // condition: only if value of i is less then the left count
    while (i < leftCount) {
        
        // assign the k value to the left array values 
        array[k++] = leftArray[i++];
    }

    // condition: only if j is less than the right count 
    while (j < rightCount) {

        // assign the k value to the right array
        array[k++] = rightArray[j++];
    } 

    free(leftArray);
    free(rightArray);
}


#include <iostream>
#include <stdio.h>
#include <stdexcept>
using namespace std;

const int MAX_TERM = 40;

void printCache(int cache[])
{
    for(int i = 0; i <= MAX_TERM; i++)
        cout << (i==0 ? "" : ", ") << cache[i];

    cout << endl;
}

void initCache(int cache[])
{
    for(int i = 0; i <= MAX_TERM; i++)
        cache[i] = -1;

    // Default the pre-defined terms of the sequence (base case)
    cache[0] = 0;
    cache[1] = 1;
}

int fib(int n, int cache[])
{
    // Throw an exception if the user asks for a term that is out of range for
    // the sequence.
    if(n < 0)
        throw runtime_error("Invalid term of the fibonacci sequence");

    // test if nth term has already been calculated
    // if no: calculate and store nth term then return
    // Since we only calculate terms that have not already been calcualted, 
    // our base case is implied.
    if(cache[n] == -1)
    {
        cache[n] = fib(n - 1, cache) + fib(n - 2, cache);
    }

    return cache[n];
}


// this line of code "int argc, char const *argv[]", 
// is needed to allow arguments from the command line
int main(int argc, char const *argv[])
{
    int term = 30; // default value

    cout << "Enter the Fibonacci term: ";
    cin >> term;

    // Added code to main function, to print out command line arguement(s)
     if (argc > 1)
     {
         cout << "Using command-line argument: " << term << endl;
     }
     else
     {
         cout << "No command-line argument provided. Using default term = 30." << endl;
     }


    int cache[MAX_TERM+1];
    initCache(cache);
    printCache(cache);

    int result = fib(term, cache);
    cout << "fib(" << term << "): " << result << endl; 
    printCache(cache);
    
    return 0; 
}

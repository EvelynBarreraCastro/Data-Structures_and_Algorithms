// Class Declaration for the enhanced IntList class
#ifndef INTLIST_H
#define INTLIST_H

const int MAX_SIZE = 20;

class IntList
{
private:
	int  list[MAX_SIZE];
	bool isValid(int);
public:
	// Constructor
	IntList();
	bool set(int, int);
	bool get(int, int&);
	int  linearSearch(int);
	int  binarySearch(int);
	void bubbleSort();
	void selectionSort();
};

#endif

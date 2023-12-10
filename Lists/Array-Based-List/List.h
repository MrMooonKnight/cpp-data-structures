#ifndef LIST_H
#define LIST_H

#include <iostream>

using namespace std;

class List {
private:
    int *array; // Pointer to an array to store elements
    int size;   // Size of the list

public:
    // Constructors
    List(); // Constructs a list with user-defined size and elements input by the user
    List(int size); // Constructs a list of specified size, initializes elements as multiples of 2
    List(int *arr, int size); // Constructs a list from an existing array

    // Setter method to set the size of the list
    void setSize(int siz);

    // Insertion methods
    void insertIndex(int idx, int val); // Inserts an element at a specified index
    void insertEnd(int val); // Inserts an element at the end of the list
    void insertStart(int val); // Inserts an element at the start of the list

    // Removal methods
    void removeStart(); // Removes the first element of the list
    void removeEnd(); // Removes the last element of the list
    void removeIndex(int idx); // Removes an element at a specified index

    // Search methods
    int next(int val); // Finds the index of the next occurrence of a value
    int previous(int val); // Finds the index of the previous occurrence of a value
    int search(int x); // Searches for a specific value in the list

    // Utility methods
    void clear(); // Clears the list
    void display(); // Displays the elements in the list
    int sort(); // Sorts the list in ascending order
    void replace(int idx, int val); // Replaces the element at a specified index with a new value
    bool isEmpty(); // Checks if the list is empty
    bool duplicate(); // Checks for duplicate elements in the list

    // Destructor to deallocate memory used by the list
    ~List();
};

#endif

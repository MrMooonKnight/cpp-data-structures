# List Class Documentation

## Overview
The List class in C++ represents a dynamic array-based list for integers. It provides various functionalities for managing elements within the list.

## Class Structure

### Private Members:
- `int *array`: Pointer to an array to store elements.
- `int size`: Size of the list.

### Public Member Functions:

#### Constructors:
- `List()`: Constructs a list with user-defined size and elements input by the user.
- `List(int size)`: Constructs a list of specified size, initializes elements as multiples of 2.
- `List(int *arr, int size)`: Constructs a list from an existing array.

#### Setter:
- `void setSize(int siz)`: Sets the size of the list.

#### Insertion Methods:
- `void insertIndex(int idx, int val)`: Inserts an element at a specified index.
- `void insertEnd(int val)`: Inserts an element at the end of the list.
- `void insertStart(int val)`: Inserts an element at the start of the list.

#### Removal Methods:
- `void removeStart()`: Removes the first element of the list.
- `void removeEnd()`: Removes the last element of the list.
- `void removeIndex(int idx)`: Removes an element at a specified index.

#### Search Methods:
- `int next(int val)`: Finds the index of the next occurrence of a value.
- `int previous(int val)`: Finds the index of the previous occurrence of a value.
- `int search(int x)`: Searches for a specific value in the list.

#### Utility Methods:
- `void clear()`: Clears the list.
- `void display()`: Displays the elements in the list.
- `int sort()`: Sorts the list in ascending order.
- `void replace(int idx, int val)`: Replaces the element at a specified index with a new value.
- `bool isEmpty()`: Checks if the list is empty.
- `bool duplicate()`: Checks for duplicate elements in the list.

#### Destructor:
- `~List()`: Destructor to deallocate memory used by the list.

## Implementation Details (List.cpp)

The implementation file contains the implementation of the List class member functions:

- Manipulation Methods: Insertion, removal, and replacement of elements.
- Search and Display Methods: Searching for elements, displaying elements, and checking for emptiness or duplicates.
- Memory Management: Methods for clearing the list and deallocating memory.
- Sorting: Method to sort the list in ascending order.
- Destructor: Deallocates memory used by the list when the object goes out of scope.

## Notes

- The List class offers fundamental functionalities for managing an array-based list of integers.
- Error handling is limited, which might lead to unexpected behavior when used improperly.
- Proper memory management using `new` and `delete[]` is crucial to prevent memory leaks.
- Enhancements such as error handling, encapsulation, and additional functionalities could improve the class's robustness and usefulness in practical applications.


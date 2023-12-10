#include <iostream>
#include "List.h" // Assuming List.h contains the necessary declarations

using namespace std;

int main() {

    List L1; // Creating an instance of the List

    // Inserting elements and displaying the list after each operation
    cout << "\nInserting Element 5 At The End: ";
    L1.insertEnd(5);
    L1.display();
    cout << endl;

    cout << "\nInserting element 8 at the start: ";
    L1.insertStart(8);
    L1.display();
    cout << endl;

    cout << "\nInserting element 6 at index 2: ";
    L1.insertIndex(2, 6);
    L1.display();
    cout << endl;

    cout << "\nSorting the array: ";
    L1.sort();
    L1.display();
    cout << endl;

    cout << "\nRemoving Element From first index: ";
    L1.removeStart();
    L1.display();
    cout << endl;

    cout << "\nRemoving element from the last index: ";
    L1.removeEnd();
    L1.display();
    cout << endl;

    cout << "\nRemoving element from index 3: ";
    L1.removeIndex(3);
    L1.display();
    cout << endl;

    // Searching for an element and displaying the result
    cout << "\nSearching for element 2 in the array: " << (L1.search(2) == 1 ? "Found" : "Not Found");
    cout << endl;

    // Replacing an element at a specified index
    cout << "\nReplacing element at index 1 with 99: ";
    L1.replace(1, 99);
    cout << endl;

    // Checking if the list is empty and displaying the result
    cout << "\nChecking if empty: " << (L1.isEmpty() == 1 ? "True" : "False") << endl;

    // Checking if duplicates exist in the list
    cout << "\nChecking If Duplicates exist: " << (L1.duplicate() == 1 ? "Yes" : "None") << endl << "Displaying List : ";
    L1.display();
    cout << endl;

    // Finding the next and previous index of an element
    cout << "\nNext index of element 99: " << L1.next(99) << endl;

    cout << "\nPrevious index of element 99: " << L1.previous(99) << endl;

    // Deleting the array
    cout << "\nDeleting The Array: ";
    L1.clear();
    cout << endl;

    // Checking if the list is empty after clearing it
    cout << "\nChecking if empty: " << (L1.isEmpty() == 1 ? "True" : "False") << endl;

    return 0;
}

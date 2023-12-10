#include "List.h"

// Constructor to create a list with user-defined size
List::List() {
    int siz;

    cout << "Enter The Size Of The List: ";
    cin >> siz;
    cout << endl;

    this->size = siz;

    this->array = new int[size];

    // Input elements into the list
    for (int i = 0; i < this->size; ++i) {
        cout << "Enter Element [" << i << "] : ";
        cin >> array[i];
    }
}

// Constructor to create a list with size and initialize elements as multiples of 2
List::List(int size) {
    this->size = size;
    this->array = new int[size];

    // Input elements into the list
    for (int i = 0; i < this->size; ++i) {
        cout << "Enter Element [" << i << "] : ";
        cin >> array[i];
    }
    cout << endl << endl;
}

// Constructor to create a list from an existing array
List::List(int *arr, int size) {
    this->size = size;
    this->array = new int[size];
    for (int i = 0; i < size; i++) {
        this->array[i] = arr[i];
    }
}

// Set the size of the list
void List::setSize(int siz) {
    this->size = siz;
}

// Insert an element at the start of the list
void List::insertStart(int val) {
    int *temp = new int[this->size];

    // Copy elements to a temporary array
    for (int i = 0; i < this->size; ++i) {
        temp[i] = this->array[i];
    }

    setSize(size + 1);

    delete[] this->array;
    this->array = NULL;

    this->array = new int[size];

    // Shift elements to make space for the new element at the start
    for (int i = 1; i < this->size; ++i) {
        this->array[i] = temp[i - 1];
    }

    this->array[0] = val;
}

// Insert an element at the end of the list
void List::insertEnd(int val) {
    int *temp = new int[this->size];

    // Copy elements to a temporary array
    for (int i = 0; i < this->size; ++i) {
        temp[i] = this->array[i];
    }

    setSize(size + 1);

    delete[] this->array;
    this->array = NULL;

    this->array = new int[size];

    // Copy elements and add the new element at the end
    for (int i = 0; i < this->size; ++i) {
        this->array[i] = temp[i];
    }

    this->array[size - 1] = val;
    delete[] temp;
}

// Insert an element at a specified index in the list
void List::insertIndex(int idx, int val) {
    int check;

    if (idx < 0 || idx >= size) {
        abort();
    }

    int *temp = new int[this->size];

    for (int i = 0; i < this->size; ++i) {
        temp[i] = this->array[i];
    }

    setSize(size + 1);

    delete[] this->array;
    this->array = NULL;

    this->array = new int[size];

    // Insert the new element at the specified index
    for (int i = 0; i < idx; ++i) {
        this->array[i] = temp[i];
    }

    this->array[idx] = val;

    for (int i = idx + 1; i < size; ++i) {
        this->array[i] = temp[i - 1];
    }
    delete[] temp;
}

// Remove an element at a specified index in the list
void List::removeIndex(int idx) {
    int check;

    if (idx < 0 || idx >= this->size) {
        cout << "This Index Exceeds The Size Of The List." << endl; 
        abort();
    }

    int *temp = new int[this->size];

    for (int i = 0; i < this->size; ++i) {
        temp[i] = this->array[i];
    }

    setSize(this->size - 1);

    delete[] this->array;
    this->array = NULL;
    this->array = new int[this->size];

    for (int i = idx; i < size; ++i) {
        temp[i] = temp[i + 1];
    }

    for (int i = 0; i < size; ++i) {
        this->array[i] = temp[i];
    }
    delete[] temp;
}

// Remove the first element of the list
void List::removeStart() {
    int *temp = new int[this->size];

    for (int i = 0; i < this->size; ++i) {
        temp[i] = this->array[i];
    }

    setSize(this->size - 1);

    delete[] this->array;
    this->array = NULL;
    this->array = new int[this->size];

    for (int i = 0, j = 1; i < size; ++i, ++j) {
        array[i] = temp[j];
    }
    delete[] temp;
}

// Remove the last element of the list
void List::removeEnd() {
    int *temp = new int[this->size];

    for (int i = 0; i < this->size; ++i) {
        temp[i] = this->array[i];
    }

    setSize(this->size - 1);

    delete[] this->array;
    this->array = NULL;
    this->array = new int[this->size];

    for (int i = 0; i < size; ++i) {
        array[i] = temp[i];
    }
    delete[] temp;
}

// Find the index of the next occurrence of a value
int List::next(int val) {
    int index;

    for (int i = 0; i < this->size; ++i) {
        if (array[i] == val) {
            index = i + 1;
            break;
        }
    }
    return index;
}

// Find the index of the previous occurrence of a value
int List::previous(int val) {
    int index;

    for (int i = 0; i < this->size; ++i) {
        if (array[i] == val) {
            index = i - 1;
            break;
        }
    }
    return index;
}

// Clear the list by deleting the array
void List::clear() {
    delete[] array;
    array = NULL;
}

// Replace the element at a specified index with a new value
void List::replace(int idx, int val) {
    if (idx < 0 || idx >= size) {
        abort();
    } else
        this->array[idx] = val;
}

// Display the elements in the list
void List::display() {
    for (int i = 0; i < this->size; ++i) {
        cout << this->array[i];
        if (i != size - 1) {
            cout << ",";
        }
    }
}

// Check if the list is empty
bool List::isEmpty() {
    if (this->array == NULL) {
        return true;
    } else
        return false;
}

// Search for a specific value in the list
int List::search(int x) {
    for (int i = 0; i < this->size; ++i) {
        if (this->array[i] == x) {
            return 1;
        }
    }
    return -1;
}

// Sort the list in ascending order
int List::sort() {
    bool already = true;
    int n = this->size;
    for (int i = 0; i < size - 1; ++i) {
        if (this->array[i] > this->array[i + 1]) {
            already = false;
            break;
        }
    }

    if (already) {
        return 1;
    }

    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (this->array[i] > this->array[j]) {
                temp = this->array[i];
                this->array[i] = this->array[j];
                this->array[j] = temp;
            }
        }
    }
    return 0;
}

// Check for duplicate elements in the list
bool List::duplicate() {
    bool duplicate = false;
    for (int i = 0; i < this->size; ++i) {
        for (int j = i + 1; j < this->size; ++j) {
            if (array[i] == array[j]) {
                duplicate = true;
                break;
            }
        }
    }
    return duplicate;
}

// Destructor to deallocate memory used by the list
List::~List() {
    delete[] this->array;
    this->array = NULL;
}

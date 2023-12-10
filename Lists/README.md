# List Implementations

This repository contains various implementations of lists in C++.

## Array-based List

### Overview
The array-based list is a dynamic list structure utilizing arrays to store elements. It offers functionalities for insertion, deletion, searching, and more.

#### Features
- Dynamic resizing
- Random access to elements
- Efficient for small to medium-sized lists

### Files
- `ArrayList.h`: Header file containing the array-based list class declaration.
- `ArrayList.cpp`: Implementation file for the array-based list class.

### Usage
- Instantiate the `ArrayList` class to create an array-based list.
- Utilize provided methods for operations like insertion, deletion, searching, sorting, etc.

## Linked List

### Overview
The linked list is a linear data structure where elements are stored in nodes that point to the next node in the sequence. It offers flexibility in size and efficient insertion/deletion operations.

#### Features
- No initial size requirement
- Efficient for frequent insertion/deletion
- No need for contiguous memory allocation

### Files
- `LinkedList.h`: Header file containing the linked list class declaration.
- `LinkedList.cpp`: Implementation file for the linked list class.

### Usage
- Instantiate the `LinkedList` class to create a linked list.
- Use provided methods for operations like insertion, deletion, searching, sorting, etc.

## Doubly Linked List

### Overview
The doubly linked list is a variation of the linked list where nodes have pointers to both the next and previous nodes. It provides bidirectional traversal and enhanced deletion capabilities.

#### Features
- Bidirectional traversal
- Improved deletion compared to singly linked lists
- Extra memory for previous node pointers

### Files
- `DoublyLinkedList.h`: Header file containing the doubly linked list class declaration.
- `DoublyLinkedList.cpp`: Implementation file for the doubly linked list class.

### Usage
- Instantiate the `DoublyLinkedList` class to create a doubly linked list.
- Utilize provided methods for operations like insertion, deletion, searching, sorting, etc.

## Circular Linked List

### Overview
The circular linked list is a linked list where the last node points to the first node, forming a circular structure. It provides easy traversal from the last to the first element.

#### Features
- Circular structure for easy traversal
- No need to track the end of the list separately
- Infinite loop possibility if not handled properly

### Files
- `CircularLinkedList.h`: Header file containing the circular linked list class declaration.
- `CircularLinkedList.cpp`: Implementation file for the circular linked list class.

### Usage
- Instantiate the `CircularLinkedList` class to create a circular linked list.
- Use provided methods for operations like insertion, deletion, searching, sorting, etc.

## Notes
- Each list implementation provides specific advantages and usage scenarios.
- Consider the characteristics and requirements of your application to choose the appropriate list structure.
- Feel free to explore and experiment with these list implementations in your projects.


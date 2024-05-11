
Singly Linked List
The Singly Linked List project is an implementation of a basic singly linked list data structure in C++. 
This project provides functionalities for creating, inserting, deleting, and traversing elements in a singly linked list.

Features
Insertion: Allows insertion of elements at the beginning, end, or at a specified position in the linked list.
Deletion: Supports deletion of elements from the beginning, end, or at a specified position in the linked list.
Traversal: Provides functions for traversing and printing the elements of the linked list.
Search: Enables searching for an element in the linked list.
Size: Computes the size of the linked list.
Empty Check: Determines whether the linked list is empty or not.

Usage
To use the Singly Linked List in your project, follow these steps:

Include the SinglyLinkedList.h header file in your project.
Create an instance of the SinglyLinkedList class.
Use the provided member functions (insert, remove, search, printList, etc.) to perform operations on the linked list.

#include "SinglyLinkedList.h"
#include <iostream>

int main() {
    // Create an empty linked list
    SinglyLinkedList myList;

    // Insert elements into the linked list
    myList.insert(10);
    myList.insert(20);
    myList.insert(30);

    // Print the elements of the linked list
    std::cout << "Linked List: ";
    myList.printList();

    // Remove an element from the linked list
    myList.remove(20);

    // Print the modified linked list
    std::cout << "Modified Linked List: ";
    myList.printList();

    return 0;
}
Contributors
Korede Akanbi
License
This project is licensed under the MIT License - see the LICENSE file for details.

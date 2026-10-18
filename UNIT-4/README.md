# Library Catalogue Management System Using BST in C++

## Problem Statement

Develop a C++ program using a Binary Search Tree (BST) to insert and delete book IDs. The program should handle nodes with zero, one, and two children and display book IDs in ascending order.

## About the Project

This is a simple Library Catalogue Management System developed using C++. It uses a Binary Search Tree (BST) to store and manage book IDs.

The project focuses on basic BST operations like insertion, deletion, and displaying book IDs in sorted order.

## Features

- Insert a new book ID into the catalogue.
- Delete an existing book ID.
- Display all book IDs in ascending order.
- Prevent duplicate book IDs.
- Show a message if a book ID is not found.
- Handle deletion of nodes with zero, one, or two children.

## Data Structure Used

**Binary Search Tree (BST)**

A BST stores smaller values in the left subtree and greater values in the right subtree. In this project, book IDs are used as keys.

## Functions Used

- `createNode()` – Creates a new node for a book ID.
- `insert()` – Inserts a book ID into the BST.
- `findMin()` – Finds the smallest book ID in a subtree.
- `deleteBook()` – Deletes a book ID and handles all three deletion cases.
- `display()` – Displays book IDs using inorder traversal.
- `freeTree()` – Releases the memory used by the tree.

## Technologies Used

- **Language:** C++
- **Data Structure:** Binary Search Tree
- **Header File:** `iostream`
- **IDE:** Dev-C++ or any C++ compiler

## How to Run

1. Download or clone this repository.
2. Open `library_catalogue_bst.cpp` in Dev-C++ or another C++ IDE.
3. Compile and run the program.
4. Use the menu to insert, delete, or display book IDs.

## Learning Outcomes

Through this project, I learned how a Binary Search Tree works and how to perform insertion, deletion, and inorder traversal in C++. I also understood the different cases of deleting a node.

## Conclusion

This project demonstrates how a Binary Search Tree can be used to manage book IDs. It helped me understand basic tree operations and how to display book IDs in ascending order using C++.

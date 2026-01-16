# Reverse Traversal of Singly Linked List

This program demonstrates **reverse traversal** of a **singly linked list** using **recursion**

---
## Description

- A singly linked list contains nodes with two parts: data and a pointer to the next node.
- Since a singly linked list cannot be traversed backward directly, **recursion** is used.
- The list is traversed until the last node, and during return from recursive calls, elements are printed in reverse order.
- The structure of the linked list remains unchanged.
---
## Algorithm

### Reverse Traversal Algorithm
1. If the current node is `NULL`, stop the function.
2. Call the function recursively for the next node.
3. Print the data of the current node while returning.
---
## Implementation

- Nodes are created dynamically using `malloc()`
- `reverseTraversal()` function performs reverse traversal
- `main()` function creates and links nodes and calls the traversal function
---



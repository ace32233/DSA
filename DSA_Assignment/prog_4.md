# Doubly Linked List Implementation in C

This program demonstrates the implementation of a **doubly linked list** in C using structures.  
It supports the following operations:

- Insert a node after a given node  
- Delete a specific node  
- Traverse and display the list  

---

## Structure Definition

Each node contains:

- `data` — value stored in the node  
- `prev` — pointer to the previous node  
- `next` — pointer to the next node  

---

## Algorithms

### Insert After a Given Node
- If the given node is `NULL`, exit the function  
- Create a new node  
- Adjust the `next` and `prev` links  
- Update surrounding node pointers safely  

### Delete a Node
- If the list is empty, return  
- If the node is the head, update the head pointer  
- Fix surrounding pointers  
- Free the deleted node’s memory
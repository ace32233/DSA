# doc_3 — Reverse Traversal of Singly Linked List (Recursion in C)

## (a) Data structure definition
A **singly linked list** node is defined using a structure:

- `data` (integer value)
- `next` (pointer to the next node)

Example:
```c
struct Node {
    int data;
    struct Node* next;
};
```

Because it is singly linked, it can only move forward (`next`). To print in reverse, the program uses **recursion**.

## (b) Functions implemented
### `struct Node* createNode(int value)`
- **Purpose:** Allocate memory using `malloc()`, set `data`, set `next = NULL`, and return the node.

### `void insertEnd(struct Node** head, int value)`
- **Purpose:** Append a new node at the end of the list.

### `void display(struct Node* head)`
- **Purpose:** Print list elements in forward order.

### `void reverseTraversal(struct Node* head)`
- **Purpose:** Print list elements in reverse order without modifying links.
- **Logic:** Recursively visit `next` until `NULL`, then print while returning.

## (c) `main()` organization overview
Typical `main()` flow:
1. Create the list (manually or by inserting nodes).
2. Print the list normally (optional).
3. Call `reverseTraversal(head)` to print in reverse.

## (d) Sample output (complete run)
```text
Linked List (forward): 10 20 30 40
Reverse traversal: 40 30 20 10
```

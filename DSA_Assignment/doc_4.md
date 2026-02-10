# doc_4 — Doubly Linked List (Insert After, Delete, Traverse) in C

## (a) Data structure definition
A **doubly linked list** node has three fields:

- `data` (value stored)
- `prev` (pointer to previous node)
- `next` (pointer to next node)

Example:
```c
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
```

Because nodes have both `prev` and `next`, traversal is possible in both directions.

## (b) Functions implemented
### `struct Node* createNode(int value)`
- **Purpose:** Allocate and initialize a new node.

### `void insertAfter(struct Node* node, int value)`
- **Purpose:** Insert a new node **after** a given node.
- **Key pointer updates:**
  - New node’s `prev = node`
  - New node’s `next = node->next`
  - Fix surrounding links safely (update `node->next` and next node’s `prev` if it exists)

### `void deleteNode(struct Node** head, struct Node* del)`
- **Purpose:** Delete a specific node and free memory.
- **Key cases handled:**
  - Empty list
  - Deleting head node
  - Deleting middle/tail nodes (fix `prev->next` and `next->prev`)

### `void traverse(struct Node* head)`
- **Purpose:** Print all nodes from head to tail.

## (c) `main()` organization overview
Typical `main()` flow:
1. Create an initial doubly linked list (head + next links).
2. Display the list.
3. Call `insertAfter()` for a chosen node and display again.
4. Call `deleteNode()` for a chosen node and display again.

## (d) Sample output (complete run)
```text
Initial list: 10 20 30
After inserting 25 after 20: 10 20 25 30
After deleting 10: 20 25 30
```

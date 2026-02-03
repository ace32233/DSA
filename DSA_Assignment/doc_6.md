# Min and Max Heap Builder in C



## Features

- Build a **Max Heap** from an unsorted array
- Build a **Min Heap** from an unsorted array
- Display the heap arrays

---

## Heap Properties

### Max Heap
- Parent node is always **greater than or equal to** its children  
- Root contains the **maximum** element

### Min Heap
- Parent node is always **less than or equal to** its children  
- Root contains the **minimum** element

---

## Array Representation

For an element at index `i`:

- **Left child:** `2*i + 1`
- **Right child:** `2*i + 2`
- **Parent:** `(i - 1) / 2`

---

## Algorithms

### Build Heap
1. Start from the last non-leaf node at index `n/2 - 1`
2. Apply the **heapify** operation moving backwards to the root

**Time Complexity:** `O(n)`

### Heapify
1. Compare the node with its children  
2. Swap with:
   - the **largest child** (Max Heap), or
   - the **smallest child** (Min Heap)
3. Recursively heapify the affected subtree

**Time Complexity:** `O(log n)`

---


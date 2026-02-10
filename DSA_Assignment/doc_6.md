# doc_6 — Min Heap and Max Heap Builder (C)

## (a) Data structure definition
This program stores the heap in an **array**:

- `int heap[MAX]`
- The heap uses **0-based indexing**

**Index rules**
- Left child of index `i` → `2*i + 1`
- Right child of index `i` → `2*i + 2`
- Parent of index `i` → `(i - 1) / 2`

No separate node structure is required; the array itself represents the complete binary tree.

## (b) Functions implemented
### `void heapifyMax(int arr[], int n, int i)`
- **Purpose:** Fix the subtree rooted at `i` to satisfy the **max-heap** property.
- **Logic:** Compare with children, swap with the largest, then continue heapifying.

### `void buildMaxHeap(int arr[], int n)`
- **Purpose:** Convert an unsorted array into a max heap.
- **Logic:** Call `heapifyMax()` from the last non-leaf node down to the root.

### `void heapifyMin(int arr[], int n, int i)`
- **Purpose:** Fix the subtree rooted at `i` to satisfy the **min-heap** property.

### `void buildMinHeap(int arr[], int n)`
- **Purpose:** Convert an unsorted array into a min heap.

### `void printArray(int arr[], int n)`
- **Purpose:** Print the heap array.

## (c) `main()` organization overview
Typical `main()` flow:
1. Read `n` and input elements.
2. Copy the array (so max-heap and min-heap can be built independently).
3. Build and print the max heap.
4. Build and print the min heap.

## (d) Sample output (complete run)
```text
Enter number of elements: 6
Enter elements: 10 4 9 1 7 5

Max Heap: 10 7 9 1 4 5
Min Heap: 1 4 5 10 7 9
```

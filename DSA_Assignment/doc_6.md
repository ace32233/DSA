#-- Min and Max Heap Builder in C --#

This program demonstrates the implementation of Min Heap and Max Heap from an unsorted array using the C programming language.

The heap is built using the efficient heapify-based approach.

#-- Features --#

Build Max Heap from an unsorted array

Build Min Heap from an unsorted array

Display heap elements using array representation

#-- Heap Properties --#

#-- Max Heap --#

Parent node is always greater than or equal to its children

Root node contains the maximum element

#-- Min Heap --#

Parent node is always less than or equal to its children

Root node contains the minimum element

#-- Array Representation --#

The heap is stored in an array.
For an element at index i:

Left Child → 2 * i + 1

Right Child → 2 * i + 2

Parent → (i - 1) / 2

#-- Algorithms --#

#-- Build Heap Algorithm --#

Start from the last non-leaf node at index n / 2 - 1

Apply the heapify operation

Move backward until the root node

Time Complexity: O(n)

#-- Heapify Algorithm --#

Compare the node with its left and right children

Swap with:

largest child for Max Heap

smallest child for Min Heap

Recursively heapify the affected subtree

Time Complexity: O(log n)
# doc_8 — Sorting Algorithms Performance (C)

## (a) Data structure definition
This program stores numbers in a simple integer array:

- `int arr[N]` — the main dataset
- A temporary array may be used for merge sort.

It also uses global (or shared) counters:
- `long long comparisons` — counts element comparisons
- `long long swaps` — counts swaps or movements (merge uses “movements”)

## (b) Functions implemented
### `void generateRandomNumbers(int arr[], int n)`
- **Purpose:** Fill the array with random integers (commonly `1` to `1000`).

### `void printArray(int arr[], int n)`
- **Purpose:** Print all elements if `n <= 100`; otherwise print first 50 and last 50.

### `void bubbleSort(int arr[], int n)`
- **Purpose:** Sort by repeatedly swapping adjacent out-of-order elements.
- **Tracks:** comparisons + swaps.

### `void selectionSort(int arr[], int n)`
- **Purpose:** Select the minimum element and place it at correct position.
- **Tracks:** comparisons + swaps.

### `void insertionSort(int arr[], int n)`
- **Purpose:** Insert each element into its correct position in the sorted prefix.
- **Tracks:** comparisons + swaps (or moves).

### `void mergeSort(int arr[], int l, int r)`
- **Purpose:** Sort using divide-and-conquer.
- **Helper:** `merge(...)` combines sorted halves.
- **Tracks:** comparisons + array movements.

## (c) `main()` organization overview
Typical `main()` flow:
1. Read `N`.
2. Generate random numbers and display the unsorted array (or partial display).
3. Ask the user to choose **one algorithm** (bubble / selection / insertion / merge).
4. Reset counters (`comparisons`, `swaps`).
5. Run the selected algorithm.
6. Print the sorted array and print counters.

## (d) Sample output (complete run)
```text
Enter N: 10
Choose sorting algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort
Enter choice: 4

Unsorted:  91 12 44 7 63 50 18 2 77 31
Sorted:    2 7 12 18 31 44 50 63 77 91

Comparisons: 24
Array movements: 34
```

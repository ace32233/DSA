#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void maxHeapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

void minHeapify(int arr[], int n, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] < arr[smallest])
        smallest = left;

    if (right < n && arr[right] < arr[smallest])
        smallest = right;

    if (smallest != i) {
        swap(&arr[i], &arr[smallest]);
        minHeapify(arr, n, smallest);
    }
}

void buildMaxHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(arr, n, i);
    }
}

void buildMinHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        minHeapify(arr, n, i);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void copyArray(int source[], int dest[], int n) {
    for (int i = 0; i < n; i++) {
        dest[i] = source[i];
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7, 15, 3, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int maxHeapArr[n], minHeapArr[n];
    copyArray(arr, maxHeapArr, n);
    copyArray(arr, minHeapArr, n);

    printf("Original Array:\n");
    printArray(arr, n);
    printf("\n");

    buildMaxHeap(maxHeapArr, n);
    printf("Max Heap:\n");
    printArray(maxHeapArr, n);
    printf("Root (Maximum element): %d\n", maxHeapArr[0]);
    printf("\n");

    buildMinHeap(minHeapArr, n);
    printf("Min Heap:\n");
    printArray(minHeapArr, n);
    printf("Root (Minimum element): %d\n", minHeapArr[0]);

    return 0;
}
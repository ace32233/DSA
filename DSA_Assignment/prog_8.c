#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long long comparisons = 0;
long long swaps = 0;

void generateRandomNumbers(int arr[], int n);
void printArray(int arr[], int n);
void bubbleSort(int arr[], int n);
void selectionSort(int arr[], int n);
void insertionSort(int arr[], int n);
void mergeSort(int arr[], int left, int right);
void merge(int arr[], int left, int mid, int right);
void resetCounters();

int main() {
    int n, choice;
    int *arr, *original;
    
    srand(time(NULL));
    
    printf("Enter the number of random integers to generate (N): ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid input! N must be positive.\n");
        return 1;
    }
    
    arr = (int *)malloc(n * sizeof(int));
    original = (int *)malloc(n * sizeof(int));
    
    if (arr == NULL || original == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    generateRandomNumbers(arr, n);
    
    for (int i = 0; i < n; i++) {
        original[i] = arr[i];
    }
    
    printf("\n=== Choose a Sorting Algorithm ===\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("4. Merge Sort\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    printf("\n=== Numbers Before Sorting ===\n");
    printArray(original, n);
    
    resetCounters();
    
    printf("\n=== Sorting in progress... ===\n");
    switch (choice) {
        case 1:
            printf("Using Bubble Sort\n");
            bubbleSort(arr, n);
            break;
        case 2:
            printf("Using Selection Sort\n");
            selectionSort(arr, n);
            break;
        case 3:
            printf("Using Insertion Sort\n");
            insertionSort(arr, n);
            break;
        case 4:
            printf("Using Merge Sort\n");
            mergeSort(arr, 0, n - 1);
            break;
        default:
            printf("Invalid choice!\n");
            free(arr);
            free(original);
            return 1;
    }
    
    printf("\n=== Numbers After Sorting ===\n");
    printArray(arr, n);
    
    printf("\n=== Performance Metrics ===\n");
    printf("Total Comparisons: %lld\n", comparisons);
    if (choice != 4) {
        printf("Total Swaps: %lld\n", swaps);
    } else {
        printf("Total Array Movements: %lld\n", swaps);
    }
    
    free(arr);
    free(original);
    
    return 0;
}

void generateRandomNumbers(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = (rand() % 1000) + 1;
    }
}

void printArray(int arr[], int n) {
    if (n <= 100) {
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
            if ((i + 1) % 10 == 0) {
                printf("\n");
            }
        }
        if (n % 10 != 0) {
            printf("\n");
        }
    } else {
        printf("First 50 elements:\n");
        for (int i = 0; i < 50; i++) {
            printf("%d ", arr[i]);
            if ((i + 1) % 10 == 0) {
                printf("\n");
            }
        }
        printf("\n... (%d elements omitted) ...\n\n", n - 100);
        printf("Last 50 elements:\n");
        for (int i = n - 50; i < n; i++) {
            printf("%d ", arr[i]);
            if ((i - (n - 50) + 1) % 10 == 0) {
                printf("\n");
            }
        }
        printf("\n");
    }
}

void resetCounters() {
    comparisons = 0;
    swaps = 0;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
                swapped = 1;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            comparisons++;
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
            swaps++;
        }
    }
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0) {
            comparisons++;
            if (arr[j] > key) {
                arr[j + 1] = arr[j];
                swaps++;
                j--;
            } else {
                break;
            }
        }
        arr[j + 1] = key;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        
        merge(arr, left, mid, right);
    }
}

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));
    
    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }
    
    int i = 0, j = 0, k = left;
    
    while (i < n1 && j < n2) {
        comparisons++;
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        swaps++;
        k++;
    }
    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
        swaps++;
    }
    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
        swaps++;
    }
    
    free(L);
    free(R);
}
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to generate a list of random numbers
void generateRandomList(int arr[], int size) {
    srand(time(0));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 11;
    }
}

// Function to swap elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

// Function to perform quicksort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size = 10;
    int arr[size];

    // Generate a list of random numbers
    generateRandomList(arr, size);

    // Print the original list
    cout << "Original List: ";
    printArray(arr, size);

    // Perform quicksort
    quickSort(arr, 0, size - 1);

    // Print the sorted list
    cout << "Sorted List: ";
    printArray(arr, size);

    return 0;
}
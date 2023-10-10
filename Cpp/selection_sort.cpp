#include <iostream> 

// Function to find the index of the minimum element in an array
int findMinIndex(const int arr[], int start, int size) {
    int minIndex = start;
    for (int i = start + 1; i < size; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

// Function to perform selection sort
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = findMinIndex(arr, i, size);

        // Swap the found minimum element with the element at index i
        if (minIndex != i) {
            std::swap(arr[i], arr[minIndex]);
        }
    }
}

// Driver program to test selection sort
int main() 
{ 
	int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("unsorted array: \n"); 
	for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
	selectionSort(arr, n); 
	printf("\nSorted array: \n"); 
	for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
	return 0; 
} 
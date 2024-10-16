#include<iostream>
using namespace std;

// Function to reverse the array using recursion
void reverseArray(int arr[], int start, int end) {
    // Base case: if start >= end, the recursion stops
    if (start >= end)
        return;
    
    // Swap the first and last elements
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    
    // Recursively reverse the remaining array
    reverseArray(arr, start + 1, end - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original Array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call the reverse function
    reverseArray(arr, 0, size - 1);
    
    cout << "Reversed Array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

#include <stdio.h>

int main() {
    // Define and initialize a 1D array
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Print the elements of the array
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Modify an element in the array
    arr[2] = 35; // Change the third element from 30 to 35

    // Print the elements of the array after modification
    printf("\nArray elements after modification:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

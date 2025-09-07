#include <stdio.h>

// Function prototype
void swap(int a, int b);

// Main function to test the swap
int main() 
{
    int x = 5, y = 10;

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Call the swap function
    swap(x, y);

    // After the swap function call
    printf("After swapping (in main): x = %d, y = %d\n", x, y);

    return 0;
}

// Function to swap the values (note: this won't affect the original variables in main)
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    // Print swapped values inside the function to show the effect
    printf("After swapping (in function): a = %d, b = %d\n", a, b);
}

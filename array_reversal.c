#include <stdio.h>

int main() {
    int size,i;

    // Reading the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int reversedArr[size];

    // Reading the elements of the array
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for(i=size-1;i>=0;i--)
    {
    	printf("%d ",arr[i]);
	}
}
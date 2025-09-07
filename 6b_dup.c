#include<stdio.h>
int main()
{
	int n,i;
	printf("enter size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("enter arrray elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Duplicate elements in the array are: ");
    for (int i = 0; i < n; i++) 
	{
    	
        for (int j = i + 1; j < n; j++)
		 {
            if (arr[i] == arr[j])
			 {
                printf("%d ", arr[j]);
                break; // To avoid printing the same duplicate element multiple times
            }
            
         }
        
    printf("\n");
   }
}
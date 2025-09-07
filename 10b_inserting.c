#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);// 1 2 3 4 5
	}
	arr[3]=6;
	printf("modified elements in array : ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
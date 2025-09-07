#include<stdio.h>
int main()
{
	int n,i,found=0;
	printf("enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter search_element : ");
	int search_element;
	scanf("%d",&search_element);
	for(int i=0;i<n;i++)
	{
	
	if(arr[i]==search_element)
	{
		found=1;
		break;
		
		
	}
}
	
	if(found)
	{
		printf("%d element is found in this array",search_element);
	}
	else
	{
		printf("%d element is not found in this array",search_element);
	}
}
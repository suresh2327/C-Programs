#include<stdio.h>
int main()
{
	int n,i,found=0;
	printf("enter size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("enter arrray elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int search_element;
	printf("enter search element : ");
	scanf("%d",&search_element);
	for(i=0;i<n;i++)
	{
		if(arr[i]==search_element)
		{
			found=1;
			break;
		}
	}
	if(found)
	{
		printf("%d is found in this array",search_element);
	}
	else
	{
		printf("%d is not found in this aray",search_element);
	}
}
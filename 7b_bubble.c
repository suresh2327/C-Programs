#include<stdio.h>
int main()
{
	int i,j,temp,n;
	printf("enter n value:\n ");
	scanf("%d",&n);
	int arr[100];
	printf("enter array elements:\n ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("sorted elements : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
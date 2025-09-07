#include<stdio.h>
int main()
{
	int n;
	printf("enter value of n : ");
	scanf("%d",&n);
	int i;
	int arr[n];
	int rev_arr[n];
	printf("enter arary elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//revesal array
	for(i=0;i<n;i++)
	{
		rev_arr[i]=arr[n-1-i];
	}
	for(i=0;i<n;i++)
	{
	
	printf("%d ",rev_arr[i]);
}
}
#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=1;i<=n;i++)
	{
	scanf("%d" ,&arr[i]);
	}
 
	for(i=1;i<=n;i++)
	{
	printf("%d ",arr[i]);
    }
}
#include<stdio.h>
int main()
{
	int c,n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
			c=c+1;
		}
		
	}
	printf(" count=%d",c);
}

//write a progam to print the last odd number of the array
#include<stdio.h>
int main()
{
	int n,i,odd;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			odd=a[i];
		}
		
	}
	printf("%d",odd);
}

	
	
	
	
	
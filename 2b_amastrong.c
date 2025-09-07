#include<stdio.h>
int main()
{
	int i ,n,sum=0,b;
	scanf("%d",&n);
   n=b;
	
	for(i=0;i<n;i++)
	{
		int a=n%10;
		sum=sum+(a*a*a);
		n=n/10;
		
	}
	
	if(sum==b)
	{
		printf("amstrong");
	}
	else
	{
		printf("not a amstrong");
	}
}
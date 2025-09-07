#include<stdio.h>
int prime(int n)
{
	int c=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	return c;
}
int main()
{
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	int c=prime(n);
	if(c==2)
	printf("prime");
	else
	printf("not prime");
}
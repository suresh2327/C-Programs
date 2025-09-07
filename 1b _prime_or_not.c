/*#include<stdio.h>
int main()
{
	int n,c=0;
	printf("enter a number : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("prime number");
	}
	else
	{
		printf("not a prime number");
	}
}
*/
#include<stdio.h>
int main()
{
	int n,c=0;
	printf("enter a number : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("prime number");
	}
	else
	{
		printf("not a prime number");
	}
}
	
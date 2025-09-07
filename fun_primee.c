#include<stdio.h>
int prime(int a)
{
	int c=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			 c++;
		}
	}
	return c;
}
int main()
{
	int a;
	scanf("%d",&a);
	int c=prime(a);
	if(c==2)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
}


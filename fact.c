#include<stdio.h>
int fact(int n)
{
	int fact =1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
	
}
int main()
{
	int n;
	scanf("%d",&n);
	int f=fact(n);
	printf("%d",f);
}
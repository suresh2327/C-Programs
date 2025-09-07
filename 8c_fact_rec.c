#include<stdio.h>
int fact(int n)
{
	if(n>1)
	{
		return n*fact(n-1);
	}
	else
	{
		return 1;
	}
	
}
int main()
{
	int n;
	printf("enter the value of n : ");
	scanf("%d",&n);
	int f=fact(n);
	printf("%d",f);
	
}
#include<stdio.h>
int main()
{
	int year;
	printf("enter the year = ");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("leap year");
	}
	else
	{
		printf("non leap year");
	}
}

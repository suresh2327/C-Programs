#include<stdio.h>
int evenodd(int a)
{

	return a;
}
int main()
{
	int a;
	scanf("%d",&a);
 a=evenodd(a);
	
	if(a%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}
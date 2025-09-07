// • Create and make a proper call to a function that– Takes 2 integers num1 and num2 as arguments– Doesn’t return anything (Function without return type)– Prints the remainder when 
#include<stdio.h>
int rem(int a,int b)
{
	int rem;
	scanf("%d%d",&a,&b);
	rem=a%b;
	printf("%d",rem);
}
int main()
{
	int a,b;
	rem(a,b);
}
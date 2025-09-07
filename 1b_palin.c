#include<stdio.h>
int main()
{
	int a,b,rem,rev=0;
	printf("enter a value : ");
	scanf("%d",&a);
	b=a;
	while(a!=0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a=a/10;
	}
	if(b==rev)
	{
		printf("%d is a palindrome",b);
	}
	else
	{
		printf("%d is not a palindrome",b);
	}
}
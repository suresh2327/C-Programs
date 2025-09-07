#include<stdio.h>
int reverse(int n)
{
	int rem,rev=0;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;	
	}
	return rev;
	
}
int main()
{
	int n,s;
	scanf("%d",&n);
	int rev=reverse(n);
	printf("%d",rev);
	
}
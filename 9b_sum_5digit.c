#include<stdio.h>
int main()
{
	int n,rem,sum=0,b;
	printf("enter the n value : ");
	scanf("%d",&n);
	b=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf(" sum of %d is = %d",b,sum);
}
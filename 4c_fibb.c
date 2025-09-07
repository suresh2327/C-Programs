#include<stdio.h>
int main()
{
	int a=0,b=1,n;
	int nextterm=a+b;
	printf("upto n : ");
	scanf("%d",&n);
	printf("%d %d",a,b);
	for(int i=3;i<=n;i++)
	{
		printf(" %d ",nextterm);
		a = b;
     b = nextterm;
    nextterm = a + b;
	}
	
}
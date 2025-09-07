#include<stdio.h>
int average(int a,int b)
{
	int c;
	c=(a+b)/2.0;
	return c;
	
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int c=average(a,b);
	printf("%d",c);
}
#include<stdio.h>
float average(int a,int b)
{
	float c;
	c=(a+b)/2.0;
	return c;
}
int main()
{
	float c;
	int a,b;
	scanf("%d%d",&a,&b);
    c=average(a,b);
	printf("%.2f",c);
}
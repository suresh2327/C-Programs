#include<stdio.h>
int swap(int a,int b)
{
	int c,two;
	 a = a + b; // x now becomes 30
    b = a - b; // y becomes 10
    a = a - b; // x becomes 20
	return two;
}
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	int two=swap(&a,&b);
	printf("%d %d",a,b);
}
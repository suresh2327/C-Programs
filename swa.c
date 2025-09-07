#include<stdio.h>
int swap(int a,int b)
{
	int temp;
   temp=a;
	a=b;
	b=temp;
	printf("%d %d",a,b);
}
int main()
{
	int a=3,b=5;
	swap(3,4);
	
}



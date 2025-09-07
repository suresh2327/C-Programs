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
	int a=5,b=6;
	swap(a,b);

}

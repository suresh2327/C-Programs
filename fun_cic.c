#include<stdio.h>
int area(int r)
{
	int circle;
	circle=3.14*r*r;
	return circle;
}
int main()
{
	int r=5,f;
     f = area(r);
	printf("%d",f);
}
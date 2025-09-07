#include<stdio.h>
int main()
{
	double s,c,r,a,l,b,h;
	printf("enter the radius of circle : ");
	scanf("%lf",&r);
	printf("enter value of side : ");
	scanf("%lf",&a);
	printf("enter lenght and breadth values = ");
	scanf("%d%d",&l,&b);
	printf("\narea of circle = %.2lf",3.14*r*r);
	printf("\n area of square =%.2lf",a*a);
	printf("\narea of reactangle=%.2lf",l*b);
	printf("\narea of triangle=%.2lf",(a+b)/2);
	return 0;
}
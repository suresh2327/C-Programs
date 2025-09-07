#include<stdio.h>
int main()
{
	double r,l,b,h,s;
	printf("\nenter the value of radius : ");
	scanf("%lf",&r);
	printf("\nenter the value of lenght : ");
	scanf("%lf",&l);
	printf("\nenter the value of breadth : ");
	scanf("%lf",&b);
	printf("\nenter the value of height : ");
	scanf("%lf",&h);
	printf("\nenter the value of side: ");
	scanf("%lf",&s);
	printf("\narea of circle %.2lf",3.14*r*r);
	printf("\narea of square %.2lf",s*s);
	printf("\narea of rectangle %.2f",l*b);
	printf("\narea of triangle %.2f",(b*h)/2);
	
	
	
}
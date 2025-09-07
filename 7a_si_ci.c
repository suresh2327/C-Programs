#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,si,ci;
	printf("enter principle amount : ");
	scanf("%f",&p);
	printf("enter time period : ");
	scanf("%f",&t);
	printf("enter  rate of percent : ");
	scanf("%f",&r);
	si=(p*t*r)/100.0;
	ci=p*(pow(1+r/100,t)-1);
	printf("simple intrest =%.3f",si);
	printf("\ncompund intrest =%0.3f",ci);
}
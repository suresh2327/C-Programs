#include<stdio.h>
int main()
{
	float f,c;
	printf("temp in celcius : ");
	scanf("%f",&c);
	f=(1.8*c)+32;
	printf("temp in faherenheit : %.2f",f);
}
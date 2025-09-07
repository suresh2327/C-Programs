#include<stdio.h>
#include<string.h>
int main()
{
	int a;
	float b;
	char c;
	char d[100];
	//input
	printf("enter the integer value : ");
	scanf("%d",&a);
	printf("enter the value of float : ");
	scanf("%f",&b);
	printf("enter the charcter : ");
	scanf(" %c",&c);
	printf("enter the string : ");
	scanf("%s",d);
	//output
	printf("\ndispalying output:");
	printf("\nvalue of integer : %d",a);
	printf("\nvalue of float : %f",b);
	printf("\nvalue of charcater : %c",c);
	printf("\nstirng : %s",d);
	//size
	printf("\nsize of integer =%d ",sizeof(a));
	printf("\nsize of float =%d",sizeof(b));
	printf("\nsize of charcter =%d ",sizeof(c));
	printf("\nsize of string =%d",sizeof(d));

}
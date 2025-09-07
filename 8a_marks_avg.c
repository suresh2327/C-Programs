#include<stdio.h>
int main()
{
	int total,tel,hin,sci,soc,mat;
	float avg;
	printf("enter telugu marks : ");
	scanf("%d",&tel);
	printf("enter hindhi marks : ");
	scanf("%d",&hin);
	printf("enter maths marks : ");
	scanf("%d",&mat);
	printf("enter science marks : ");
	scanf("%d",&sci);
	printf("enter social marks : ");
	scanf("%d",&soc);
	total=tel+hin+mat+sci+soc;
	avg=(total/5);
	printf(" total marks of student = %d",total);
	printf("\naverage marks of student = %.2f",avg);
	
}
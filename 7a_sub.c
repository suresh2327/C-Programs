#include<stdio.h>
int main()
{
	int tel,hin,mat,soc,sin;
	printf("enter the marks of tel,hin,mat,soc,sin :");
	scanf("%d%d%d%d%d",&tel,&hin,&mat,&soc,&sin);
	int total;
	float avg;
	total =tel+hin+mat+soc+sin;
	avg=(total)/6;
	printf("total marks : %d",total);
	printf("\naverage marks : %.2f",avg);
}
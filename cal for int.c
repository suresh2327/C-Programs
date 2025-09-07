#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	printf("enter the the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	c=a-b;
	d=a+b;
	e=a*b;
	f=a/b;
	g=a%b;
    printf("sub=%d",c);
    printf("\nadd=%d",d);
    printf("\nmul=%d",e);
    printf("\ndiv=%d",f);
    printf("\nmod=%d",g);
	return 0;
}

#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
    {
			printf("a is bigger than b,c ");
	}
	else if(b>a && b>c )
	{
		printf("b is biggger than a,c ");
	}
    else
    {
    	printf("c is bigger than a,b");
	}
	
}

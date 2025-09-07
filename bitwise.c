#include<stdio.h>
int main()
{
	int a=100,b=1,c,d,e,f,g;
	c=a&b;
	d=a|b;
	e=a^b;
	f=a<<b;
	g=a>>b;

	printf("a&b=%d\n",c);
	printf("a|b=%d\n",d);
	printf("a^b=%d\n",e);
	printf("a<<b=%d\n",f);
	printf("a>>b=%d\n",g);

	
}

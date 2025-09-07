#include<stdio.h>
int prime(int a)
{
	int i,c=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
		c++;
    	}
    	
	}
	return c;
}
 int main()
 {
 	int a;
 	scanf("%d",&a);
 	 int c = prime(a);
 	 if(c==2)
	{
		printf("prime number");
	}
	else
	{
		printf("not a prime number");
	}
 	
 }
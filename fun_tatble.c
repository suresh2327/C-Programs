#include<stdio.h>
int table(int a)
{
	for(int i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",a,i,a*i);
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	table(a);
	return 0;
	
}
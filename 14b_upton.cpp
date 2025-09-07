#include<stdio.h>
int natural(int s, int n)
{
	int i;
	for(i=s;i<=n;i++)
	{
		if(i!=0)
		{
			printf("%d\n",i);
		}
	}
}
int main()
{
	int s=0,n=10;
	natural(s,n);
}
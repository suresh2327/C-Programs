#include<stdio.h>
int main()
{
	int n,i,even,odd;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
		   printf("even=%d\n",a[i]);
		}
   }
   for(i=0;i<n;i++)
   {
   	if(a[i]%2!=0)
   	{
   		printf("odd=%d\n",a[i]);
	}
   }
}
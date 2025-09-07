//passing through array through array
#include<stdio.h>
int print_array(int a[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	return sum;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int res=print_array(a,n);//function call
	printf("%d",res);
}
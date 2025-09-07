//passing through array through array
#include<stdio.h>
void print_array(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d" ,a[i]);
	}
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
	print_array(a,n);//function call
}
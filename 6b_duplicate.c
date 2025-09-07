#include<stdio.h>
int main()
{
	int size;
	printf("enter size of aaray : ");
	scanf("%d",&size);
	int a[size];
	int b[size];
	int i,j,c=0;
	printf("enter %d array elements : ",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i]==b[j])
			{
				break;
			}
		}
		if(j==c)
		{
			b[c]=a[i];
			c++;
		}
	}
	printf("array values of removing duplicate elements : ");
	for(i=0;i<c;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
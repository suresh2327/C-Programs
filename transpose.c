#include<stdio.h>
int main()
{
	int i,j,a,b,sum=0;
	printf("enter order of matrix = ");
	scanf("%d%d",&a,&b);
	int arr[a][b];
	printf("enter array elements of first matrix =");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
		scanf("%d",&arr[i][j]);
     	}
     }

	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}


}
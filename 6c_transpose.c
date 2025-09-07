#include<stdio.h>
int main()
{
	int a1,b1;
	printf("enter the order of first matrix : ");
	scanf("%d%d",&a1,&b1);
	int mat1[a1][b1];
	printf("enter matrix 1 elements : \n");
	for(int i=0;i<a1;i++)
	{
		for(int j=0;j<b1;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("transpose of matrix : \n");
		for(int i=0;i<a1;i++)
	{
		for(int j=0;j<b1;j++)
		{
		printf("%d ",mat1[j][i]);
		}
		printf("\n");
	}
	
}
#include<stdio.h>
int main()
{
	int a,b,i,j;
	printf("enter order of array : ");
	scanf("%d%d",&a,&b);
	int mat1[a][b];
	printf("enter elements of mat1 :\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	int mat2[a][b];
	printf("enter elements of mat2 :\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	int mat3[a][b];
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	printf("sum of matrices : \n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d ",mat3[i][j]);
		}
		printf("\n");
	}
}
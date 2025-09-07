#include<stdio.h>
int main()
{
	int a1,b1;
	printf("enter the order of first matrix : ");
	scanf("%d%d",&a1,&b1);
	int mat1[a1][b1];
	printf("enter matrix 1 elements : ");
	for(int i=0;i<a1;i++)
	{
		for(int j=0;j<b1;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	int a2,b2;
	printf("enter the order of seconf matrix : ");
	scanf("%d%d",&a2,&b2);
	int mat2[a2][b2];
	printf("enter the elements of matrix 2 : ");
	for(int i=0;i<a2;i++)
	{
		for(int j=0;j<b2;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	int mat3[a1][b2];
	for(int i=0;i<a1;i++)
	{
		for(int j=0;j<b2;j++)
      {
			mat3[i][j]=0;
			
    	for(int k=0;k<3;k++)
	   {
		mat3[i][j]+=mat1[i][k]*mat2[k][j];
    	}
   	}
}
	for( int i=0;i<a1;i++)
	{
		for(int j=0;j<b2;j++)
		{
			printf("%d ",mat3[i][j]);
		}
		printf("\n");
	}
	
}
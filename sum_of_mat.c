#include<stdio.h>
int main()
{
	int m,s,i,j;
	scanf("%d%d",&m,&s);
	int mat1[m][s];
	for(i=0;i<m;i++)
	{
		for(j=0;j<s;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
		printf("\n");
	}
	int mat2[m][s];
	for(i=0;i<m;i++)
	{
		for(j=0;j<s;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<s;j++)
		{
			printf(" %d",mat1[i][j]+mat2[i][j]);
		}
		printf("\n");
	}
	
	  	
	
	
	
	
}
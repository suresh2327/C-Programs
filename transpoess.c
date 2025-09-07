#include<stdio.h>
int main()
{
	int n,m;
	printf("enter order of matrix : ");
	scanf("%d%d",&n,&m);
	int i;
	int arr[n][m];
	printf("enter the mmatrix element : ");
	for(i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("transpose of matrix :\n");
	for(i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
}
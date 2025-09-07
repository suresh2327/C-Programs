//array is an storage of continuous memory location of all same data types.
//it is accesing with index values
//index value starts from o
//size of an array is n-1
// syntax of an array:
//  data type[size];
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
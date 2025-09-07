#include<stdio.h>
void selection(int*arr,int size){
	int i,j,min;
	for(i=0;i<size-1;i++){
		min = i;
		for(j=i+1;j<size;j++){
		  if(arr[min]>arr[j])
		  {
		  	min = j;
		  }
		}
		int d = arr[min];
		arr[min] = arr[i];
		arr[i] = d;
	}
	  for(i=0;i<size;i++)
	  {
	  	printf("%d",arr[i]);
	  }
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}	selection(arr,n);
	
	
}
#include<stdio.h>
 int main()
 {
 	int i,n;
 	printf("enter n value");
 	scanf("%d",&n);
 	for(i=0;i<=10;i++)
 	{
 		if(i==5)
 		{
 		 continue;
		 }
		printf("%d",i);
	 }
 }
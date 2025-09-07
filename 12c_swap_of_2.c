#include<stdio.h>
int swap(int a,int b)
{
	int temp;
	temp=a;
    a=b;
    b=temp;
    printf("after swaping %d %d",a,b);
    
    
	
}
int main()
{
	int a,b;
	printf("enter a and b values : ");
	scanf("%d%d",&a,&b);
	swap(a,b);
	
	
	
}
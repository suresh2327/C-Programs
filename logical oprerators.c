#include<stdio.h>
int main()
{
	int a=(10>20) && (15>10);
	printf("\n%d",a);
	a=(10>20) || (10<20);
	printf("\n%d",a);
	a=!(10>20);
	printf("\n%d",a);
}


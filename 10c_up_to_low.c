#include<stdio.h>
int main()
{
	char str[100];
	scanf("%[^\n]s",str);
	int i;
	for(i=0;str[i]!=0;i++)
	{
		if(str[i]>'A' && str[i]<'Z')
		{
			str[i]=str[i]+32;
		}
	}
	printf("lower strinng : %s ",str);
}
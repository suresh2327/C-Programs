#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int c=0;
	gets(s);
	for(int i=0;s[i]!='\0';i++)
	{
		c++;
	}
	printf("%d",c);
}
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i;
	printf("enter a string : ");
	scanf("%[^\n]s",s);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a' && s[i]<='z');
		{
			s[i]=s[i]-32;
		}
	}
	printf("uppercase of string = %s",s);
}
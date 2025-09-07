#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,len=0;
	char s[10],s1[10];
	scanf("%[^\n]s",s);
    while(s[i]!='\0')
    {
    	len++;
    	i++;
	}
	for(i=len-1;i>=0;i--)
	{
		printf("%c",s[i]);
	}
}
#include<stdio.h>
#include<string.h>
/*int main()
{
	int i,c=0;
	char str[100];
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		c++;
	}
	printf("length of string %d",c+1);
	
}
*/

int main()
{
	char s[100],i,c=0;
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		c++;
	}
	for(i=c;i>=0;i--)
	{
		printf("%c",s[i]);
	}
}
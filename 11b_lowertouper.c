#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	scanf("%[^\n]s",str);
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>'a' && str[i]<'z')
		{
			str[i]=str[i]-32;
		}
	}
	printf("uperrcase string is %s ",str);
	
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char ch[100];
	scanf("%[^\n]s",ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>='a' && ch[i]<='z')
		{
			ch[i]=ch[i]-32;
		}
	}printf("uppercase string is %s",ch);
}
*/

#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	int i,n,max=0;
	scanf("%[^\n]s",ch);
	for(i=0;ch[i]!='\0';i++)
	{
	  if(ch[i]>='a' && ch[i]<='z')
	  {
	  	n=ch[i];
	  	if(n>max)
	  	{
	  		max=n;
		  }
	  	}	
	}
	printf("%c",max);	
}
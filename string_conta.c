#include<stdio.h>
int main()
{
	int i,j;
	char s1[10],s2[20],s3[10];
	scanf("%[^\n]s",s1);
	scanf("%[^\n]s",s2);
	for(i=0;s1[i]!='\0';i++)
	{
		s3[i]=s1[i];
	}
	s3[i]='\0';
	for(int j=0;j<=i;j++)
	{
		s3[i+j]=s2[j];
		
	}
	printf("%s",s3);
}
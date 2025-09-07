#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	scanf("%[^\n]s",s);
     char m[10];
	scanf(" %[^\n]s",m);
    char g[10];
	scanf(" %[^\n]s",g);
	/*printf("\nstring reverse= %s",strrev(s));
	printf("\nlenght of string =%d",strlen(s));
	printf("\nsize of string =%d",sizeof(s));
	printf("\nupper to lower =%s",strlwr(s));
	printf("\nlower to upper=%s",strupr(s));

	printf("copy of strings = %s",strcpy(s,m));
	printf("\nstring concatenation=%s",strcat(s,m));*/
	printf("string compare =%d",strcmp(s,m));
	printf("\nstring comapre =%d",strcmp(s,g));
	
}                                           
                               
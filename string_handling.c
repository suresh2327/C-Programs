#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="namit";
	char s[]="kushwaha";
	char c[]="namit";
	

   printf("lenght of string= %d",strlen(str));
   
   
	printf("\n size of string= %d",sizeof(str));
	
	
    printf("\n string lower= %s",strlwr(str));
    
	printf("\n string upper= %s",strupr(str));
	
	printf("\n string revese= %s",strrev(str));
	
	printf("\n string copy= %s",strcpy(str,s));
	
	printf("\n string concantenation= %s",strcat(str,s));
	
	printf("\n string compare= %d",strcmp(str,s));
   printf("\n string compare= %d",strcmp(str,c));
	
}
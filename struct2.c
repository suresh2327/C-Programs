#include<stdio.h>
struct emp
{
	int emno;
	char emp[20];
};
int main()
{
	struct emp e;
	printf("enter the empolye details\n");
	scanf("%d %s",&e.emno,&e.emp);
	printf("empolye no : ");
		printf("%d\n ",e.emno);
		printf("empolye name : ");
		printf("%s",e.emp);
		printf("\nlength=%d",sizeof(e));
}
#include<stdio.h>
struct std
{
	int rno;
	char name[20];
	float cgpa;
};
int main()
{
	//struct std s1={1, "suresh" ,9.5};// int a=10; >>> method 1
	struct std s;
	s.rno=209;
	strcpy(s.name,"suresh");
	s.cgpa=3.9;
	printf(" rno = %d \n name = %s \n cgpa =%f",s.rno,s.name,s.cgpa);
}
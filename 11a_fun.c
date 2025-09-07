/* syntax of function
     
     
>>>> function declaration  : it tell to compiler about return type ,fuunction name and parameters
    

reutntype function_name(parameter_list); 

ex: int add(int a,int b);


>>>> function definition : in function defintion only whole code implementation will be done

returntype function_name(parameter_list)

ex: int add(int a,int b)

>>> function calling : To use the function, you call it by its name and pass the required arguments.

ex: add(a,b); */
#include<stdio.h>
int add(int a,int b);// fun declaration or prototype
int add(int a,int b)
{
	int sum=a+b;
	return sum;
}
int main()
{
	int a,b;
	printf("enter a and b values = ");
	scanf("%d%d",&a,&b);
	int sum=add(a,b);
	printf("sum of %d and %d = %d",a,b,sum);
}
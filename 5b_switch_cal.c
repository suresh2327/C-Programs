#include<stdio.h>
int main()
{
	char c;
	printf("enter operator : ");
	scanf("%c",&c);
	printf("enter a and b values : ");
	double a,b,res;
	scanf("%lf%lf",&a,&b);
	switch(c)
	{
		case'+':
		res=a+b;
		break;
		case'-':
			res=a-b;
			break;
			case'*':
				res=a*b;
				break;
				case'/':
					if(b!=0)
					{
						res=a/b;
					}
					else
					{
						printf("denomintor is 0");
				}
	}
	printf("result of %.2lf %c %.2lf=%.2lf",a,c,b,res);
}
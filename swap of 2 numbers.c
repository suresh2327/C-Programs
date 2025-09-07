#include<stdio.h>
int main()
{
   int a,b;
   scanf("%d%d",&a,&b);
 
    // Code to swap 'x' and 'y'
    a = a + b; // x now becomes 30
    b = a - b; // y becomes 10
    a = a - b; // x becomes 20
 
    printf(" %d %d", a, b);
 
    return 0;
}

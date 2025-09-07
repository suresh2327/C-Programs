#include <stdio.h>
int add(int a, int b)
{
    int c = a + b;
    return c;
    
}
int main()
{
    int a = 10, b = 20;
    
    int c=add(a, b);
    printf("\n%d", c);
}
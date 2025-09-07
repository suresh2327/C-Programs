#include <stdio.h>
int main()
{
    int a;
    char c;
    float f;
    double ll;
    printf("size of int : %u bytes\n", sizeof(a));
    printf("address of int : %d \n", &a);
    printf("size of char : %u bytes\n", sizeof(c));
    printf("address of char : %d \n", &c);
    printf("size of float : %u bytes\n", sizeof(f));
    printf("address of float : %d \n", &f);
    printf("size of double : %u bytes\n", sizeof(ll));
    printf("address of double : %d \n", &ll);
    return 0;
}
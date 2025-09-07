#include<stdio.h>
int swap(int a,int b)
{
    int temp=a;
    b=temp;
}
int main()
{
    int a=10,b=20;
    printf("before swap:a=%d, b=%d",a,b);
    swap(a,b);
    printf("\nafter swap:a=%d, b=%d",a,b);
}
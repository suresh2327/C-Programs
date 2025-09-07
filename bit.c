#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int n, k,a,b,c;
    scanf("%d %d", &n, &k);
    a=n&k;
    b=n|k;
    c=n^k;

    printf("%d",a);
    printf("\n%d",b);
    printf("\n%d",c);
 
    return 0;
}

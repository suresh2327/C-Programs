#include <stdio.h>
int palin()
{
	int n, o, rev = 0, rem;
    scanf("%d", &n);
    o = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    
    if (o == rev)
    {
         int i,c=0;
         for(i=1;i<=rev;i++)
         {
         	if(rev%i==0)
         	{
         		c++;
			}
		 }
		 if(c==2)
		 {
		 	printf("prime palindrome");
		 }
		 else
		 {
		 	printf("not prime palindrome");
		 }
    }
    else{
    	printf("not a plaindrome");
	}
}
int main()
{
    palin();
}
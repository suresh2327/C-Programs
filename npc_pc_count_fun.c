#include<stdio.h>
int prime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void prime_non_prime_count(int a[],int n)//23 45 11 78 29
{
 	int i,pc=0,npc=0;
 	for(i=0;i<n;i++)
 	{
 		if(prime(a[i]))//23 prime(23)
 		{
 			pc++;
		}
		 else
		 {
		 	npc++;
		 }
	 }
	 printf("%d %d",pc,npc);
}
 int main()
 {
 	int n;
 	scanf("%d",&n);
 	int a[n],i;
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	}
	 prime_non_prime_count(a,n);//function call
 	
 }
	
	
	
	
	
	
	
	
	
	
	
	
/*functions: 
     function is a block of statments it will do specific task  when we call the function
     these aren twom types
     1.predefined functions
     pre-defined  funcitons are in-bulit functions in header functions
     2.userdefined functions
     user-defined functons are created by users bassed on requirment of user
     
     
     syntax of function:
     
     returntype function_name(type1 var1,type2 var2);
     ex:
     int add(int a,int b);
     */
     
     
     
     
     
     
         
     #include<stdio.h>
     void palin()//function definition
{
    int n,rev=0,i,t,r;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(t==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}
    
	 int main()//function callilng
	 {
	  palin();
	   }  
   
   
   
   

   
   
   
   

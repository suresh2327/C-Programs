22/2/24

//Basic structure of C program
#include<stdio.h>
/
	# -- Hastag
	#include -- pre processor directory
	<stdio.h> -- standard input and output headerfile
 */
int main()//Without main function the code will not execute
{
	//-----Statements;Every stataement(line) ends with semicolon(;)
	//-----;
	printf("----");//it shows output on the display
	return 0;//to end the program
}

 /Compile shortcut - F9
 /Run shortcut - F10
 /Compile and run - F11

23/2/24

#include<stdio.h>
int main()
{
	printf("Hello\tworld\n\n"); // \t - equals to tab in keyboard
	printf("H\ne\nl\nl\no\n \nw\no\nr\nl\nd"); // \n - prints on next line
	return 0;
}
/
declaration of variables = it is used to store the data
datatype variable name = value

datatypes : 
	
	1.Primitive datatypes
	2.Derived datatypes
	3.User defined datatypes
	
	1. PRIMITIVE DATATYPES 
		1. Integer datatypes - only wholenumbers e.g-1,3,9,500... = %d - format specifier(%02d-prints last two digits)
		2. Float datatype - integer values e.g-1.2,5.9,99.99... = %f-
		3. Character datatypes - alphabets -- 'a' to 'z' & 'A' to 'Z' = %c 
		4. Double datatype - larger value = %lf
		
		printf("formatspecifier",variablename);
		 
	scanf("%d",&a); - %d is format specifier and &a is storage of that
	
	
Opperators in C

	1.Arthematic operators	--- ( Mathematical )
		+ = addition,
		- = subtraction,
		* = multiplication,
		/ = division,
		% = reminder. 
	2.Logical operators		--- 
	3.Assignment operators	--- 
	4.Bitwise operators		--- 
	
24/2/24	
	
syntax:
	returntype variable=name
	int ;
	float ;
	how to initialize - declaration of variable means assigning a value to it
	int r;
	r=10;
	int x=20;
	-- the type of the data that stores the data of particular type is called that type of data
	there are three types 
	1.Primitive - pre determined data types
	2.derived - 
	3.User defined - 
	
29/2/24

1) arthematic operators --- +,-,*,/,%

2) relational operators	--- >,<,<=,>=,==,!=
  
	if the expression is true it will print 1  
  	if the expression is false it will print 0
  	
3) logical operators --- &&`,||,!

	&& is like AND gate
	
	Logical and - (10<5) && (25<8)	result is 0(false)
	
	|| is like OR gate
	
	Logical or - (1<2) || (20<10)  result is 1(true)
	
	! is like NOT gate
	
	Logical not - !(9<1)		result is 1(true)

4) Assignment operators 

	- the assignment operators ara used to assign values to the operator
	- +=,-=,*=,/=
	- e.g=	a+=b means a=a+b
			a-=b means a=a-b
			a*=b means a=a*b
			a/=b means a=a/b
5)increment or decrement operators:
	-it is also called as modify operators
	increment operator is ++
	decrement operator is --
eg:-
   ++a----->means a=a+1
   --a----->means a=a-1
if you write a++,a-- in first printf,the output is same value is there.then after print 'a' 
in next printf the output is increment to a that means vlue='a+1'

6)ternary operators:
	
      when the condition is true first value is printed
      when the condition is faise second value is printed
	
     int a=10,b=20;
     int res=(a>b)?a:b;
     printf("%d",res);
     output is b=20 i.e second value ,the condition is false
 7)bitwise operators:
 	
     it will converts the input into binary language then
     do process and print the binary as decimal output
     
     bitwise AND: &
     bitwise OR : |
     bitwise XOR: ^	
     bitwise left shift: <<
             right shift:>>
     
     bitwise left operator:
     int a=100,b=1;
	printf("%d",a<<b);
	 output is a*(2^b);
	 
	 bitwise right operator:
	 	int a=10,b=2;
	printf("%d",a>>b);
	 output is a/(2^b);
	 
2/03/24:

*conditional statements:(decission control statements)	 

what is condition:an expression contains a relational operator	 	

relational operators
a==b
a!=b
a>=b
a<=b
a>b
a<b
a,b

logical operators
&&
||
!
types of conditional statements
1.if
2.if else
3.if-else if(else-if-ladder)
4.Nested if
5.switch

1.if
syntax:
	if(condition)
	{
		statements
	}
	a,b
	a=10,b=20
	b>a
	#include<stdio.h>
	int main()
	{
		int a,b;
		scanf("%d%d",&a,&b);
		if(a>b){
			printf("a is greater than b ");
		}
		return 0;
	}
2.else:
	syntax:else
	#include<stdio.h>
	int main()
	{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b){printf("yes it is right");
	}
	else{printf("please enter valid numbers\n");
	}
	return 0;
	}

3.if-else-if(else-if ladder):

#include<stdio.h>
int main()
{
	int a,b,c;//variable declaration
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)//condition
	{
		printf("a is biggest number\n");
	}
	else if(b>a && b>c){
		printf("b is biggest number\n");
	}
	else{
		printf("it is not right")
	}
    
	}	
7/3/24
4-nested if else
syntax:
	if(condition 1)
	{
	   if(condition 2)
          {
		     //statement1 
		  }
		  else
		  {
		  	//statement2
		  }
	}
	else{
		if(condition 3){//statement
	}
	else{//statement
	    }
	  }
	}
	
5-switch
syntax:
	switch statement:
		switch(exp)
		{
			case val1:
				//statement1;
				break;
		    case val2:
		    	//statement2;
		    	break;
		.
		.
		.
		case valn:
			//statement;
			break;
		default:
			// default statement
		}
		
14/03/24
control statements /iterative statements /looping statements:
 
 loops are used to execute block of statements several times untill the condition will true.
 loops are categoriged two types:
 1)entry controlled loops		
 2)exit controlled loops
 
 15/03/24
 *entry controlled loops:		
     types of entry controlled loops:
     	1)forloop
     	2)while loop
  *exit controlled loops:
     	1)do while loop


syntax of for loop:
	for(initialization;condition;updation(increment or decrememnt))
	{   _________
		statemements;
	}
ex:#include<stdio.h>
int main()
{
	int n;//variable declaration
	scanf("%d",&n);//reading input
	int i;
	for(i=1;i<=n;i++)//loop
	{
		printf("hello world\n");
	}
}


21/03/2024;
while loop:
syntax of while loop:
     initialization	
     	while(condition)
	    {
	    	//statements;
	    	//updation;
		}
	
ex://write a program to print 1 to n numbers using while loop
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;//
	while(i<=n)
	{
		printf("%d\n",i);
		i++;
	}
}
	
*spy number is a number which is sum of digits equals to product of digits.	
*perfect number:sum of the factors of the given numbers is equals to the original number.	

22/03/24;
DO-While loop:
*do-while loop is a exit control loop
	
syntax of do-while loop:
    intialization
	do
	{
		statements
		updation
		---------
	}
	while(condition);
	
*Break and continue statements:
  break--break is a key word used to stop the loop for programe execution .generally loops are used
         in for loop ,while loops,do while loop and finally switch statements.	
	
        ---if we use berak statement in loops when that is encounted it will stop the loop execution
	        and it is transpose the controller to the out side of the loop
syntax of the break statements:
	
	for(initialization;condition;updation)
	{
		if(condition)
		{
			//statements
			break;
		}
	}
	
--Continue:continue is a key word it is used in loops .	
        	*it  is skips the current iteration and continue with the next iteration.
syntax:
       for(initialization;condition;updation)
	   {
	   	continue;
	   }	
23/03/24:
Arrays:
	
 --the array is a collection of homogenious values(same type means all are integers or float values).
 --array is a collection of continuous memory allocations.

  Array are two types:
  	1)one dimensional array
  	2)multi dimentional array
*one dimensional array:
     -array having single row multiple columns
	 -array having single subscription operator
	 -[] it is called array	
array declaration:
	syntax:
		datatype var_name[size];          int a[5];
		                                 int a[5]={10,20,30,50,60};
ex:
      #include<stdio.h>
      int main()
     {
	    int a[10],i,b=0;
        for(i=0;i<=5;i++)
       {	scanf("%d",&a[i]);
	   }
       }
       
 28/03/24:
 
 6/4/24:
Type convertions:
   //converting one type to another type of data
   1.Implicit convertion
   2.Explicit convertion 	
 1.Implicit convertion:--implicit convertion will be done by the compiler--no data loss
  #include<stdio.h>
int main()
{
	char ch='A';//65
	int b=10;
	printf("%d",ch+b);
} output is 75.  
	
	
2.explicit convertion:this conversation will be done by the user.--data loss is there.
       syntax:
       	(datatype)expression;
	   
	   #include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%f",(float)(a+b)/2);
}   

Algorithm:
	//sum of two numbers
step 1:start
step 2:declare a,b
step 3:read a,b
step 4:calculate sum=a+b 
step 5:print the sum
step 6:stop

2/05/2024:
	nested loops:
	  syntax:
	  	for(initial;condition;updation)
	  	{
	  		for(intialization;condition;updation)
	  		{
	  			//statements;
			  }
		  }
patterns:
	
3/05/2024:
   strings:
           
           
           
           
  string handling functions/// string built in functions
  1.string length -strlen();
  2.string lower---strlwr();
  3.string upper---strupr();
  4.string reverse-strrev();
  5.string concatenatin--strcat();
  6.string compare-strcmp(); -- means merge two strings
  7.string copy----strcpy();
   use of string copy is

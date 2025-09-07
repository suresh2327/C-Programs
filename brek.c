#include <stdio.h> 
void main() 
{ 
 int num =0; 
 while(num<=100) 
 { 
 printf("value of variable num is: %d\n", num); 
 if (num<=10) 
 { 
 continue; 
 } 
 num++; 
 } 
 printf("Out of while-loop"); 
 
} 
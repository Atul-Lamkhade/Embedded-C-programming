// write a program that uses unary operatos to increment and decrement a variable.Initialize a variable,use both pre-increment and post-increment operators and print the results.

//Author- Atul Lamkhade

#include<stdio.h>
int main()
{
    int x=5;
    printf("Initial value of x:%d\n",x);
    //for pre increment
    printf("Preincrement(++x):%d\n",++x);
     //after pre increment
    printf("Value after preincrement:%d\n",x);
    
      //for post increment
    printf("postincrement(x++):%d\n",x++);
    // after post increment
    printf("Value after postincrement:%d\n",x);
    //for both
    printf("Final value after preincrement and postincremnt:%d\n",x);
    
return 0;
}
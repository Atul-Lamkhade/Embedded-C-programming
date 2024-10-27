//Write a C program that demonstrates the concept of  variable scope by using local and global variables.shoe how changes to a global variable affect the output in different functions.

//Author Name -Atul Lamkhade


#include<stdio.h>
int  a=10;  //Global variable

 int  main()
{
    int b=15;  //Local variable
    printf("%d\n",b);
    printf("%d\n",a); 
    atul();
    return 0;
}
void atul()
{
    int x=9;
     printf("%d\n%d",x,a);


}




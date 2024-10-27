//To write a C program that initializes global and local variableswith different values.Print the values to demonstratehow initialization worksfor each scope.

// Author Name-Atul Lamkhade


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




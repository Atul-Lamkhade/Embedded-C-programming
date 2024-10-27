// Write a C program that demonstrates the difference between pre-increment(++x) and post-increment(x++).Print the values before and after each operation.

//Author - Atul Lamkhade



#include<stdio.h>
int main()
{
// for pre-increment
int x=6;
printf("Initial value of x:%d\n",x);
printf("value before pre-increment :%d\n",++x);
printf("value after pre-increment :%d\n",x);


//For post-increment


printf("value before pre-increment :%d\n",x++);
printf("value after pre-increment :%d\n",x);


    return 0;
}

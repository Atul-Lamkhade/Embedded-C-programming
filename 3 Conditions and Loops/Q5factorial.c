//Write a C program to compute the factorial of a given positive integer using for loop.

//Author Name - Atul Lamkhade

#include<stdio.h>
int main()
{
    int num;
    unsigned long long factorial=1;
    printf("Enter a number whose factorial is to be calculated : ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
        factorial*=i;
    }
    printf("Factorial of %d is: %llu ",num,factorial);
  return 0;
}
//Write a C program to print the maximum numbers among 2 using macro MAX.

//Author name- Atul lamkhade

#include<stdio.h>

#define MAX(a,b) ((a)>(b) ? (a):(b))

int main()
{
    int num1,num2;

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);


    int maximum=MAX(num1,num2);

    printf("Maximum number: %d\n",maximum);

    return 0;

}

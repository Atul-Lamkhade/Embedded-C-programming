//Write a C program to print multiplication table for a number upto 10 using nested for loop.Number should be input by the user.

//Author name- Atul Lamkhade

#include <stdio.h>

int main() 
{
    int num, i, j;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i <= 10; i++)
     {
        // Inner loop for the multiplication and display
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

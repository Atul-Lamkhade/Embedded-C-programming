//Write a C program that prints right angled triangle  patternof stars(*) with n rows using nested for loop. number of rows should provide by the user

//Author name- Atul Lamkhade

#include<stdio.h>
int main()
{
int rows;
printf("Enter the number of rows:");
scanf("%d",&rows);

for(int i=1;i<=rows;i++)   //this loop is for printing rows
{
    for(int j=1;j<=i;j++)//this loop is for printing *
    {
    printf(" *");
     }

    printf("\n");
    }
}


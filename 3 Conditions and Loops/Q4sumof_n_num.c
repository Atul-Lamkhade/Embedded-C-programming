//Write a C program that calculates the sum of first  n positive numbers using for loop. Value of n should provided by the user.

//Author Name- Atul Lamkhade

#include<stdio.h>
int main()
{
    int n,sum=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
          sum+=i;
    }
    
    printf("sum of first %d positive numbers : %d\n",n,sum);

    return 0;
}
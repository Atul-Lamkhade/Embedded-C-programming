//Write a C program to swap two integer variables using function.

//Author Name: Atul Lamkhade


#include<stdio.h>

void swap( int num1, int num2);
int main()
{
    int num1,num2;
    printf("Enter first number : ");
    scanf("%d",&num1);

    printf("Enter second number : ");
    scanf("%d",&num2);


    printf("Before Swapping : Num 1= %d and Num 2=%d\n",num1,num2);

    swap(num1,num2);
    return 0;
}
void swap( int num1, int num2)
{
 
    int temp=num1;
    num1=num2;
    num2=temp;
    
    printf("After Swapping : Num 1= %d and Num 2=%d\n",num1,num2);

}

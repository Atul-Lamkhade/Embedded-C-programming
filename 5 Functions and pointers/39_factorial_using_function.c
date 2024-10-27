//Write a C program to input a number from user and find its factorial with the help of functions.

//Author Name : Atul Lamkhade

#include<stdio.h>
int factorial(int num)
{
  if(num==0)   //base class
  {
    return 1;
  }  

  /*int factNm1=factorial(num-1);
    int factN=factNm1*num;
    return factN;*/ 
  else
  {
    return num*factorial(num-1); //recursive case
  }
}

int main()
{
    int num;

    printf("Enter a number :");
    scanf("%d",&num);

printf("Factorial of %d is:  %d\n ",num,factorial(num));

return 0;


}
//Write a C program to input two numbers from user and add them.Use different functions for different functionalities.

//Author name-Atul Lamkhade

#include<stdio.h>

//function declarations
int getInput();
int addnum(int a,int b);
int display(int result);

//main function
int main ()
{
   int num1 =getInput();  //call function getInput()
   int num2 =getInput();
   
      int sum = addnum(num1,num2);  //call function addnum
      display(sum);           //call function display

 return 0;
}

int getInput()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    return num;
}

int addnum(int a,int b)
{
    return a+b;
}

int display(int result)
{
    printf("Sum is: %d\n",result);
}











    
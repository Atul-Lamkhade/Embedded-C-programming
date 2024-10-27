/*Write a C program that defines an enum Operation with values ADD, SUBTRACT,MULTIPLY and DIVIDE.Write a function performOperation that takes two integers and an operation 
enum value, performs the corresponding operation and returns the result.Demonstrates this function in your main function.take two integer values from user.*/

//Author Name : Atul Lamkhade


#include<stdio.h>

typedef enum{ADD,SUBTRACT,MULTIPLY,DIVIDE}Operation;

int performOperation(int a,int b,Operation op);
int main()
{
    int a;
    int b;
    int choice;
    Operation op;

    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);

    printf("Choose an operation \n");
    printf("0:Addition\n");
    printf("1:Subtraction\n");
    printf("2:Multiplication\n");
    printf("3:Divsion\n");

    printf("Enter your choice : ");
    scanf("%d",&choice);

    op=(Operation)choice;

    int result=(performOperation(a,b,op));

    printf("Result :%d\n ",result);

    return 0;



    
}

int performOperation(int a,int b,Operation op)
{
    switch(op)
     {
        case ADD:
        return a+b;

        case SUBTRACT:
        return a-b;

        case MULTIPLY:
        return a*b;

        case DIVIDE:
         if(b!=0)
         {
           return  a/b;
         }
         else
         {
            printf("Error:Division by zero\n");
            return 0;
         }
         default:
           printf("Invalid Operation\n");
           return 0;
        
     }
}
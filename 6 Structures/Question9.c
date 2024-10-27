/*Write a C program that defines an enum Operation with values ADD, SUBTRACT,MULTIPLY and DIVIDE.Write a function performOperation that takes two integers and an operation 
enum value, performs the corresponding operation and returns the result.Demonstrates this function in your main function.*/

//Author Name : Atul Lamkhade


#include<stdio.h>
typedef enum{ADD,SUBTRACT,MULTIPLY,DIVIDE}Operation;
int performOperation(int a,int b,Operation (op))
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
int main()
{
    int a=10;
    int b=5;
    int choice;
    Operation op;

    printf("Choose operation\n");
    printf("0.ADD\n");
    printf("1.SUBTRACT\n");
    printf("2.MULTIPLY\n");
    printf("3.DIVIDE\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);

    op=(Operation)choice;

    int result=performOperation(a,b,op);

    printf("Result:%d\n",result);
    return 0;

}
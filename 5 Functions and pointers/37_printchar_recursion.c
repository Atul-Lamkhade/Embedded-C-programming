//Take a number and character from user and print character that number of times using recursion.

//Author name: Atul lamkhade 


#include<stdio.h>

void printchar(int num,char character)
{
    if(num > 0)
    {
        printf(" %c\n",character);

        printchar(num-1,character);          //recursive call
    }
}

int main()
{
int num;
char character;

printf("Enter the number :");
scanf("%d",&num);

printf("Enter the character :");
scanf(" %c",&character);


printchar(num,character);

return 0;

}
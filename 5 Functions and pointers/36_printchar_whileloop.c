//Take a number and character from user and print character that number of times using while loop.

//Author name: Atul lamkhade 


#include<stdio.h>
int main()
{
int num,count =0;
char character;

printf("Enter the number :");
scanf("%d",&num);

printf("Enter the character :");
scanf(" %c",&character);

while (count < num)  //using  while loop
{
    printf(" %c",character);
    count++;
}
return 0;
}
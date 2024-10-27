//Write a C program that reverses a given integer using do-while loop.

//Author Name- Atul lamkhade

#include<stdio.h>
int main()
{
int Integer=4321;
int reverseNum =0,remainder;

do
   {
    remainder=Integer%10;
    reverseNum=reverseNum*10+remainder;
    Integer/=10;
   }
while(Integer!=0);

printf("Reversed number:%d",reverseNum);

    return 0;
    
}
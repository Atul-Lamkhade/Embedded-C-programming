//Write a C program to get a string from user through keyboard using getchar() function.

//Author name : Atul Lamkhade

#include<stdio.h>
int main()
{
char str[100];
char ch;
int i=0;

printf("Enter a string: ");

while((ch=getchar())!='\n' && i< sizeof(str)-1)
 {
    str[i] = ch;
    i++;

 }
   str[i]='\0';
printf("You entered: %s",str);
    return 0;

}
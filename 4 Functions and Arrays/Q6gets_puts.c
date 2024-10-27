//Write a C program to show use of gets and puts functions by taking strings from user end.

//Author name- Atul Lamkhade

#include<stdio.h>

int main(){
char str[50];

printf("Enter a string : ");

fgets(str,sizeof(str),stdin);
printf("Your entered : ");
puts(str);
return 0;
}
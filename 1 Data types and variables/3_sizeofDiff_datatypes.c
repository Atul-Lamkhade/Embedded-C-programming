// Write c program to print size of different data types.

//Author name-Atul Lamkhade

#include<stdio.h>
int main()
{
int a=1;
float f=1.8;
double d=2465;
char c='A'; 

printf("Size of integer:%dbytes\n",sizeof(a));
printf("Size of float:%dbytes\n",sizeof(f));
printf("Size of double:%dbytes\n",sizeof(d));
printf("Size of character:%dbytes\n",sizeof(c));

    return 0;
}
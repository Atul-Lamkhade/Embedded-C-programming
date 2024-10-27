//Write a C program to check maximum and minimum number. The numbers should entered by the user.

//Author name-Atul Lamkhade

#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter the numbers:");
scanf("%d %d",&num1,&num2);

int max,min;
if(num1>num2)
{
  max=num1;
  min=num2;
}
else
{
   max=num2;
   min=num1;
}

printf("Maximum number is:%d\n",max);
printf("Minimum number is:%d",min);
    return 0;

}
//Write a C program that calculates the maximum of three numbers using conditional(ternary) operator . The program should handle case when numbers are equal.

//Author Name- Atul Lamkhade

#include<stdio.h>
int main()

{
    //for maximum number among three numbers
   int num1,num2,num3;
   printf("Enter three numbers:");
   scanf("%d %d %d",&num1,&num2,&num3);
  
   int max_num = (num1>num2) ? ((num1>num3) ? num1:num3):((num2>num3)? num2 : num3);
    printf("Maximum number between %d,%d and %d is :%d\n",num1,num2,num3,max_num);

    /*for maximum number between two numbers

   int max=(num1>num2)? num1:num2;
   printf("Maximum number between %d and %d is :%d",num1,num2,max);
    */

    //condition if numbers are equal
   if(num1==num2 && num1==num3)
   {
    printf("Numbers are equal");
   }
   return 0;

}
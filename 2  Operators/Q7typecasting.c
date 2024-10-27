//Write a C program that demonstrates the effect of type casting on arithmetic operations.The program should perform division with both integer and floating point types and show how results differ

//Author - Atul Lamkhade

#include<stdio.h>
int main()
{
int a=5,b=4;
float resultFloat;
int resultInt;

//for  both integer division
resultInt=a/b;
printf("integer division (a/b):%d / %d = %d\n",a,b,resultInt);

//for both float division
resultFloat= (float)a/(float)b;
printf("Float division (float)a/(float)b: %d / %d = %f\n",a,b,resultFloat);


//for float divided by integer

resultFloat= (float)a/b;
printf("Float divided by integer(float)a/b: %d / %d = %f\n",a,b,resultFloat);



//for integer divided by float
resultFloat= a/(float)b;
printf("integer divided by float a/(float)b: %d / %d = %f\n",a,b,resultFloat);





    return 0;
}
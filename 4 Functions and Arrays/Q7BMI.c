//Write a C program to get a persons height and weight and calculate their BMI.

//Author Name - Atul Lamkhade

#include<stdio.h>
int main(){

float height, weight, BMI;
printf("Enter hewight in meters : ");
scanf("%f",&height);

printf("Enter weight in kg : ");
scanf("%f",&weight);

BMI= weight / (height*height);

printf("Your BMI is : %.2f\n",BMI);


return 0;

}
/*Define a union named vehicle that can store either the number of wheels(int) the engine capacity(float), or the vehicle type (char[20]) .Write a program to demonstrate how to use
this union to store and print all three types of data.*/

//Author Name :Atul Lamkhade 

#include<stdio.h>
#include<string.h>

union vehicle
{
   int number;
    char type[20];
   float capacity;
  

};

int main()
{
    union vehicle info;

    
    strcpy(info.type,"Passenger vehicle");
    info.number=4;
    info.capacity=1.5;

    printf("\nThe number of wheels of vehicle : %d\n",info.number);
    printf("The capacity (in tones) is : %f\n",info.capacity);
    printf("The type of the vehicle is : %s\n",info.type);

    return 0;
}
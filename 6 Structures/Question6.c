//Write a C program to print the Temperature and pressure of a heat chamber on a given console one by one with efficient memory usage through unions.

//Author name : Atul Lamkhade 

#include<stdio.h>
union heatChamber
{
     float temperature;
     float pressure;
};

int main()
{
     union heatChamber data;

     data.temperature=100;
     printf("Temperature of heat chamber  :%f\n",data.temperature);

     data.pressure=66.555;
     printf("Pressure of heat chamber  :%f\n" ,data.pressure);


     printf("Temperature of heat chamber  :%f\n",data.temperature);
     printf("Pressure of heat chamber  :%f\n" ,data.pressure);
     return 0;
     
}
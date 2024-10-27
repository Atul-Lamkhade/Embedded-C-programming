//Write a function that calculates the area of circle given its radius ueing real typedef.Print result in main.

//Author name- Atul Lamkhade


#include<stdio.h>
#include<math.h>

typedef float real;
real Area(real radius)
{
    const real PI=3.14159265;
    return PI*radius*radius;
}

int main()
{
    real radius;

    printf("Enter the radius of the circle :");
    scanf("%f",&radius);

    printf("The area of circle is : %.2f\n",Area(radius));

    return 0;
}
//Write a c program to define a macro "area" to calculate area of circle after providing radius by user.

//Author name- Atul lamkhade

#include<stdio.h>

#define PI 3.14
#define area(radius)(PI*(radius)*(radius))

int main()
{
    double radius;
    
    printf("Enter the radius of the circle : ");
    scanf("%lf",&radius);

    double areaofcircle=area(radius);

    printf("Area of circle : %lf\n",areaofcircle);

    return 0;
}
/*Define an enum ShapeType with values CIRCLE,RECTANGLE,SQUARE and TRIANGLE .Write a C program that uses a Switch statement to print a description for each shape type .
For example."CIRCLE :  A round shape." ,"RECTANGLE : A shape with four right angles.",etc.*/

//Author name :Atul Lamkhade 

#include<stdio.h>
typedef enum {
              CIRCLE,
              RECTANGLE,
              SQUARE,
              TRIANGLE
             }ShapeType;


void printDescription(shape)
{

    switch (shape)
    { 
        case CIRCLE:
        printf("Circle: A round shape.\n");
        break;

        case RECTANGLE:
        printf("Rectangle:A shape with four right angles.\n");
        break;

        case SQUARE:
        printf("Square: A shape with four right angles and equal sides.\n");
        break;

        case Triangle:
        printf("Triangle: A shape with three sides.\n");
        break;

        default:
        printf("Unknown shape");
        break;
    }
}
int main()
{
    printDescription(CIRCLE);
    printDescription(RECTANGLE);
    printDescription(SQUARE);
    printDescription(TRIANGLE);

   return 0; 
}
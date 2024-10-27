/*Define a structure Circle with members radius(float) and color(string of 20 characters).Write a function updateRadius that takes a pointer to a Circle structure and 
a new radius value,updates the radius of the circle and then prints the updated radius.*/

//Author Name : Atul Lamkhade

#include<stdio.h>
#include<string.h>

struct Circle
{
    float radius;
    char color[20];
};

void updateRadius(struct Circle *c ,float rad)
{
    c->radius = rad;
       printf("Updated Radius :%.2f\n",c->radius);
}

int main()
{
    struct Circle circle;
   
    strcpy(circle.color,"Black");
    circle.radius=10;

       printf("Original radius:%.2f\n", circle.radius);

       updateRadius(&circle ,15);
       return 0;
}
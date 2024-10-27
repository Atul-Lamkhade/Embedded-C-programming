/*Define a structure person with the members name(string of 50 characters)and age (integer).Write a C program to initialize a Person structure with your own details 
and then print the name and age of the person.*/

//Author name : Atul Lmakhade 

#include<stdio.h>
#include<string.h>
struct Person
{
    char name[50];
    int age;

};


int main()
{
    struct Person person1;

    strcpy(person1.name,"Atul");
    person1.age=22;

    printf("Name of the Person: %s\n",person1.name);
    printf("Age of the Person: %d\n",person1.age);

    return 0;
}

#include<stdio.h>
#include<string.h>
struct Date
{
    int day;
    int month;
    int year;
};

struct Person
{
    char name[50];
    int age;
    float height;
    struct Date birthdate;

};

int main()
{
    struct Person person1;
    strcpy(person1.name,"Atul");
    person1.age=22;
    person1.height=5.5;

    printf("Name:%s\n",person1.name);
    printf("age:%d\n",person1.age);
    printf("Height:%.2f\n",person1.height);


    struct Person person2={"Amit",22,5.5};
    printf("Name:%s\n",person2.name);
    printf("age:%d\n",person2.age);
    printf("Height:%.2f\n",person2.height);
   

return 0;
}

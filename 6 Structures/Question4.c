/*Define a structure Course with members courseName(string of 100 characters) and credits (integer) .Define another structure Student with name (string of 50 characters)
age(integer) and an array of Course structure.Write a Function to print the details of Student including all the courses they are enrolled in.*/

//Author Name : Atul Lamkhade


#include<stdio.h>
#include<string.h>
struct Course{
    char courseName[100];
    int credits;
};

struct Student{
    char Name[50];
    int age;
    struct Course courses[10];
    int numCourses;
};

void printStudentDetails(struct Student student)
{
    printf("Student name :%s\n",student.Name);
    printf("age :%d\n",student.age);
    printf("enrolled in %d courses :\n",student.numCourses);
    for(int i = 0;i<student.numCourses;i++)
    {
        printf("Course %d : %s, credits : %d\n", i + 1,student.courses[i].courseName , student.courses[i].credits);
    }

};

int main()
{
    struct Student student;
    strcpy(student.Name,"Atul");
    student.age=22;
    student.numCourses=3;

    strcpy(student.courses[0].courseName, "Mathhematics");
    student.courses[0].credits=5;    
    
    strcpy(student.courses[1].courseName, "CS");
    student.courses[1].credits=6; 

    strcpy(student.courses[2].courseName, "Eng");
    student.courses[2].credits=4;   
    
    printStudentDetails(student);
    return 0;

    
} 
//Write a C program to take information from user using structures like roll number,name ,standard and percentage.Print them as well.

//Author Name : Atul Lamkhade


#include<stdio.h>

struct StudentData
{
     int RollNumber;
     char Name[20];
     int Standard;
     float Percentage;
};

int main()
{
    struct StudentData info;
    
    printf("Enter roll number : ");
    scanf("%d",&info.RollNumber);

    printf("Enter Name:");
    //while(getchar() != '\n');
    fgets(info.Name,sizeof(info.Name),stdin);
    scanf("%s",&info.Name);

    printf("Enter standard :");
    scanf("%d",&info.Standard);

    printf("Enter percentage :");
    scanf("%f",&info.Percentage);


    printf("\n");
    printf("USER INFORMATION\n");

    printf("Roll Number :%d \n",info.RollNumber);
    printf("Name: %s\n",info.Name);
    printf("Standard: %d \n",info.Standard);
    printf("Percetage :%.2f \n",info.Percentage);



    return 0;

}  
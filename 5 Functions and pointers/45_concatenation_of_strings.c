//Write a c program to perform concatenation on 2 strings.Use pointers to string for strcat() function

//Author name : Atul Lamkhade

#include<stdio.h>
#include<string.h>
void Strcat(char *destination , char *sourse) 
{
    while (*destination !='\0')
    {
        destination++;
    }

    while(*sourse !='\0')
    {
        *destination=*sourse;
        destination++;
        sourse++;
    }
    *destination = '\0';
}
int main()
{
   char str1[50];
   char str2[50];

   printf("Enter first string :");
   fgets(str1,sizeof(str1),stdin);
   printf("Enter Second string :");
   fgets(str2,sizeof(str2),stdin);


   str1[strcspn(str1,"\n")]=0;
   str2[strcspn(str2,"\n")]=0;

    Strcat(str1,str2);

   printf("Concatenated string is : %s\n",str1);







    return 0;
}
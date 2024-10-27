//Take month number from user and print how many days are there in a month by using switch statements.

//Author name- Atul Lamkhade


#include<stdio.h>
int main()
{
 int monthNum;
      printf("Enter the month number: ");
      scanf("%d",&monthNum);

      switch(monthNum)
      {
        case 1:case 3: case 5:case 7:case 8:case 10:case 12:
        printf("This month has 31 days");
        
        break;

        case 4:case 6:case 9:case 11:
        printf("This month has 30 days");

        break;

        case 2:
        printf("This month has 28 or 29 days");
 

      }



    return 0;
}
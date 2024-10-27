// To write c Pragram to print table of number entered by user using pintf and scan functions.

//Author name-Atul Lamkhade

#include<stdio.h>
 int main()
 {
   
   //Multiplicatoin table of given number
  
  
  int number,i;
  printf("Enter Number:");
  scanf("%d",&number);

  printf("Multiplication table of %d\n",number);


   for(i=1;i<=10;i++)
   {
   printf("%d * %d = %d\n",number,i,number*i);
   }
 
    return 0;
 }
//Write a C program to access elements of an array of 10 elements using pointer arithmetic.

//Author name: Atul Lamkhade


#include<stdio.h>
int main(){
    int arr[10];
    int *ptr=arr;

    printf("Enter 10 elements: ");

    for(int i=0;i<10;i++)
      {
        scanf("%d",ptr + i);
      }

      printf("Array elements are : \n");
      for(int i=0;i<10;i++)
      {
         printf("%d ",*(ptr + i));
      }
   
   printf("\n");
   return 0;
}
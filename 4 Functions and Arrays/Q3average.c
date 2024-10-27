//Write a c program to calculate the average of n integers stored in an array.The size of array and the elements should be provided by the user.

//Author name- Atul Lamkahde 
#include<stdio.h>
int main()

{  
int n; 
float sum=0,average;

//taking number of elements from user
printf("Enter the number of elements of array : "); 
scanf("%d",&n);

int arr[n];

//taking elements of array from user
printf("Enter %d elements:\n",n);
 for(int i=0;i<n;i++)
 {
    scanf("%d",&arr[i]);
    sum+=arr[i];  //for taking sum of array elements
 }

 average=sum/n;  //for calculating average
 printf("The average of elements of an array :%.2f\n",average);

 return 0;
}
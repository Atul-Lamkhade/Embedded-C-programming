//Write a c program to reverse the elements of an aaray.the size of array and elements should be entered by the user.

//Author name- Atul Lamkhade

#include<stdio.h>
int reverseArray(int arr[], int size)
{
   int start=0;
   int end=size-1;
   int temp;

   while(start<end)
   {
      temp = arr[start];
      arr[start]=arr[end];
      arr[end]=temp;
      start++;
      end--;
   }
}
int main()

{   
int size;

//taking number of elements from user
printf("Enter the size of array : "); 
scanf("%d",&size);

int arr[size];

//taking elements of array from user
printf("Enter %d elements:\n",size);
 for(int i=0;i<size;i++)
 {
    scanf("%d",&arr[i]);
 }
 reverseArray(arr,size);

printf("Reverse array \n");
for(int i=0;i<size;i++)
{
   printf("%d ",arr[i]);

}

printf("\n");
 return 0;
}


//WWrite a C programto find the largest and smallest elements in an aarayof integers.The size of the arrayand the elements should be entered by the user.

//Author name-Atul Lamkhade
#include<stdio.h>
int main()

{   
int n,i;

//taking number of elements from user
printf("Enter the number of elements of array : "); 
scanf("%d",&n);

int arr[n];

//taking elements of array from user
printf("Enter %d elements:\n",n);
 for(i=0;i<n;i++)
 {
    scanf("%d",&arr[i]);
 }

 int largest=arr[0];
 int smallest=arr[0];

for(i=1;i<n;i++)      //for finding smallest and largest number
{
    if(arr[i]>largest)
    {
        largest=arr[i];
    }
     if(arr[i] < smallest)
    {
        smallest=arr[i];
    }
}
    printf("Smallest element of an array : %d\n",smallest);
    printf("largest element of an array : %d\n",largest);






    return 0;
}
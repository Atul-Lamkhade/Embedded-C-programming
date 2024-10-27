//Write a C program to calculate power of given base and index (power=base^index).

//Author Name : Atul Lamkhade

#include<stdio.h>
int power(int base ,int index)
{
    int result=1;
    for(int i=0;i<index;i++)
    {
        result*=base;
    }
    return result;
}
int main()
{
    int base,index,result;
    printf("Enter base :");
    scanf("%d",&base);

    printf("Enter index :");
    scanf("%d",&index);
    
    result=power(base,index);
    
     printf("%d^%d=%d",base,index,result);
     return 0;
}
// Write a program to find out maximum number out of 3 numbers entered by the user.

 //Author name- Atul lamkhade

 #include<stdio.h>
 int main()
{
 int num1,num2,num3;
 printf("Enter the numbers:");
 scanf("%d %d %d",&num1,&num2,&num3);

if(num1>=num2 && num1>=num3)
{
    printf("%d",num1);
}
else if(num2>=num1 && num2>=num3)
{
    printf("%d",num2);

}
else
{
    printf("Maximum number is :%d",num3);
}
    return 0;
}
//Write a c program that initializes a variable x to 10. Use compound assignment operators to increment by 5,decrement by 2,multiply by 3 and divide by 4'Print the final value of x.
 
 //Author - Atul Lamkhade

 #include<stdio.h>
 int main()
 {
    int x=10;//initialize x

    x+=5;  //increment by 5
    
    x-=2;  //decrement by 2

    x*=3;  //multiply by 3

    x/=4;   //divide by 4

    printf("The final value of x:%d",x);
    return 0;
 }
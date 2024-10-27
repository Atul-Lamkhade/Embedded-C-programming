//Write a c program that demonstrates the use of bitwise AND,OR and XOR operators.Initilize two integers and aaply these operators to them and print the results
 
//Author - Atul Lamkhade

 #include<stdio.h>
 int main()
 {

    int a=5,b=6;
     printf("a:%d b:%d\n",a,b);

     int andResult = a&b;
     printf("a&b=%d\n",andResult);

     int orResult = a|b;
     printf("a|b=%d\n",orResult);
     
      int xorResult = a^b;
     printf("a^b=%d\n",xorResult);

    return 0;

 }
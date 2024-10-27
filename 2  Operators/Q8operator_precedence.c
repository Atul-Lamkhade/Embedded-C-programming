//Write aC program that demonstrates the order of evaluation in expressions with operators.Use parenthesis to show how operator precedence affects the result.

//Author name- Atul Lamkhade
#include<stdio.h>
int main()
{
  int a=3,b=2,c=5;
  int result;
  //nOperator precedence    *,/,%,+,-         
  // without parenthesis

  result=a+b*c;
  printf("Without parenthesis :%d\n",result);

  //with parenthesis
  result=(a+b)*c;
  printf("With parenthesis :%d\n",result);

    return 0;

}
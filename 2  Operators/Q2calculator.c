//Write a C program for calculator with basic operations.

 //Author Name- Atul Lamkhade

 #include<stdio.h>

 int main()
 {
    char operator;
    double num1,num2,result;
 //enter the operator
    printf("Enter the Operator(+,-,*,/) ");
    scanf("%c",&operator);

//enter the numbers

    printf("Enter two numbers ");
    scanf("%2lf %2lf",&num1,&num2);

    switch(operator)
    {
        case'+':
        result=num1+num2;
        printf("%2lf+%2lf=%2lf\n",num1,num2,result);
        break;

        case'-':
        result=num1-num2;
        printf("%2lf-%2lf=%2lf\n",num1,num2,result);
        break;

        case'*':
        result=num1*num2;
        printf("%2lf*%2lf=%2lf\n",num1,num2,result);
        break;

        case'/':
        if(num2 != 0)
        {
          printf("%2lf*%2lf=%2lf\n",num1,num2,result);
        }
        else
        {
            printf("any number cannot be divisible by 0\n");
        }
          break;
        
    
        default:
        printf("Choose correct operator(+,-,*,/)");
    }
    return 0;
 }
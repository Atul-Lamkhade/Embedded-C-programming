//Write a C program to input data like: num1 ,num2and arithmetic operation from user and perform task.

//Author name-Atul lamkhade

#include <stdio.h>

int main() 
{
    float num1, num2, result;
    char operation;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Input arithmetic operation
    printf("Enter the arithmetic operation (+, -, *, /): ");
    scanf(" %c", &operation);  

    // Perform the arithmetic operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operation.\n");
            break;
    }

    return 0;
}

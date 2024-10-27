//Write a menu driven program to perform basic arithmetic operations. Menu options- 0 to Exit,1 to Add,2 to subtract,3 to multiply and 4 to divide. Depending upon the choice entered by the arithmetic operations should be performed and continue till user wants

//Author name-Atul Lamkhade

#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    do 
    {
    // Display the menu
    printf("\nMenu:\n");
    printf("0. Exit\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // If choice is 0, exit the loop
    if (choice == 0)
    {
      printf("Exiting the program.\n");
        break;
    }

  // Input numbers from the user
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform arithmetic operation
    switch (choice)
     {
         case 1:
         result = num1 + num2;
         printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
        break;
        case 2:
        result = num1 - num2;
        printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
        break;
        case 3:
        result = num1 * num2;
        printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
         break;
        case 4:
        if (num2 != 0)
        {
         result = num1 / num2;
         printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
        }
        else
       {
        printf("Error: Division by zero is not allowed.\n");
        }
        break;
        default:
        printf("Invalid choice! Please choose a valid option.\n");
        }
    } 
    while (choice != 0);  // Continue until user chooses 0 to exit

    return 0;
}

/*Write a C program to find the length of a given string without using the strlen function. The
 string should be input by the user.*/
//Author  Name- Atul Lamkhade


#include <stdio.h>

int main() {
    char str[100];  
    int length = 0; 


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    while (str[length] != '\0') {
        length++;
    }

    if (str[length - 1] == '\n') {
        length--;
    }

    printf("The length of the string is: %d\n", length);

    return 0;
}



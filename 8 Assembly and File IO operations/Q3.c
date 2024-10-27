//Write a C program to read contents of a file and display it on the screen.

//Author Name - Atul Lamkhade

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *file;
    char filename[256];
    int ch;

    printf("Enter the filename to read: ");
    scanf("%255s",filename);

    file=fopen(filename,"r");

    if(file==NULL)

    {
        perror("Error opening file");

        return 1;

    }

    printf("\n Contents of file : \n");
    while((ch=fgetc(file)) != EOF)
    {
        putchar(ch);

    }
    fclose(file);

    return 0;
}
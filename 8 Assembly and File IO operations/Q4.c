//Write a C program to create of a file and write user input into it.

//Author Name - Atul Lamkhade

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *file;
    char filename[100];
    int input[1000];

    printf("Enter the filename to create and write to: ");
    scanf("%s",filename);

    file=fopen(filename,"w");

    if(file==NULL)

    {
        perror("Error opening file");

        return 1;
    }

    printf("Enter the text to write to file:");
    getchar();
    fgets(input,sizeof(input), stdin);
    fputs(input,file);


    fclose(file);
    printf("Text has been written to %s\n",filename);
    return 0;
}

    

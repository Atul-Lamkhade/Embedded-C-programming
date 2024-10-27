//Write a C program to count the number of characters, words, and lines in a file.

//Author Name - Atul Lamkhade

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int in_word = 0; 

    file = fopen("input.txt", "r");

    if (file == NULL) 
    {
        printf("Could not open file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) 
    {
        characters++; 

    
        if (ch == ' ' || ch == '\n' || ch == '\t')
         {
            if (in_word) 
            {
                words++;
                in_word = 0;
            }
        } else 
        {
            in_word = 1;
        }

        if (ch == '\n')
         {
            lines++;
        }
    }

    if (in_word) 
    {
        words++;
    }
    fclose(file);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}

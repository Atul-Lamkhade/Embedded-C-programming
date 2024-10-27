
//Write a C program to merge the contents of multiple text files into a single file.  

//Author Name - Atul Lamkhade
  
#include <stdio.h>
#include <stdlib.h>

void mergeFiles(int numFiles, char *fileNames[], const char *outputFile)
 {
    FILE *outFile, *inFile;
    char ch;

    outFile = fopen(outputFile, "w");
    if (outFile == NULL)
     {
        printf("Could not open output file.\n");
        exit(1);
    }

    for (int i = 0; i < numFiles; i++) 
    {
        inFile = fopen(fileNames[i], "r");
        if (inFile == NULL)
         {
            printf("Could not open file %s.\n", fileNames[i]);
            continue; 
        }

        while ((ch = fgetc(inFile)) != EOF) 
        {
            fputc(ch, outFile);
        }

        fclose(inFile);
    }

    fclose(outFile);

    printf("Files merged successfully into %s\n", outputFile);
}

int main()

 {
    
    int numFiles = 3;
    char *fileNames[] = {"file1.txt", "file2.txt", "file3.txt"};
    char outputFile[] = "merged_output.txt";

    mergeFiles(numFiles, fileNames, outputFile);

    return 0;
}

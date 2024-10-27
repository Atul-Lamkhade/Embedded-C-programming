//Write a C program to copy contents of one file to another.

//Author Name - Atul Lamkhade

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE  *sourcefile,*destinationfile;
    char source[100];
    char destination[100];
    char ch;

printf("Enter the name of sourse file :");
scanf("%s",source);

sourcefile = fopen(source,"r");
if(sourcefile == NULL)
{
    printf("Error in opening in source file");
    return 1;

}

printf("Enter the name of destinstion file :");
scanf("%s",destination);

destinationfile = fopen(destination,"w");

if(destinationfile == NULL)
{
    printf("Error in opening in  destination file");
    fclose(sourcefile);
    return 1;
    
}
//copy character by character

while((ch=fgetc(sourcefile))!=EOF);
{
    fputc(ch,destinationfile);

}

fclose(sourcefile);
fclose(destinationfile);

printf("File is copied from %s to%s .\n",source,destination);



 }
//Write a C program to append text to an existing file.

//Author Name - Atul Lamkhade 

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *file;
    char filename[100];
    char input[1000];

  printf("Enter the filename to append :");
  scanf("%s",&filename);

  file=fopen(filename,"a");

  if (file==NULL)
  {
    printf("Error in opening the file");
    return 1;

  }
  printf("Enter the text to append to the file :\n");
  getchar();
  fgets(input,sizeof(input),stdin);
  fputs(input,file);

  fclose(file);
  printf("Text has been successfuly appended to the %s",filename);
  return 0;





}
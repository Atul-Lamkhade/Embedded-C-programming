/* Define a structure named Rectangle that includes two members: length and width, both of type float.Write a function printRectangle that takes Rectangle structure as an argument and 
print its length and width*/

//Author name : Atul lamkhade


#include<stdio.h>

struct Rectangle
{
    float length;
    float width;

};

void printRectangle( struct Rectangle rect)    //function defn and declaration
{
    printf("Length :%.2f\n", rect.length);
    printf("Width :%.2f\n", rect.width);

}


int main()
{
    
    struct Rectangle rect;
    rect.length=5;
    rect.width=8;
    printRectangle(rect);  //function call
    
    return 0;
}

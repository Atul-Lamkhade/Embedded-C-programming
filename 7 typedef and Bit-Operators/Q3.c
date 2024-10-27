//Write a function to initialize a Book struct with a title and publication date. Then print the details of the book in main.

//Author Name- Atul Lamkhade

#include <stdio.h>
#include <string.h>


struct Book {
    char title[100];
    int publicationYear;
};


void initializeBook(struct Book* b, const char* title, int year) {
    strcpy(b->title, title);  
    b->publicationYear = year; 
}


void printBookDetails(struct Book b) {
    printf("Book Title: %s\n", b.title);
    printf("Publication Year: %d\n", b.publicationYear);
}

int main() {

    struct Book myBook;

  
    initializeBook(&myBook, "The C Programming Language", 1978);

   
    printBookDetails(myBook);

    return 0;
}

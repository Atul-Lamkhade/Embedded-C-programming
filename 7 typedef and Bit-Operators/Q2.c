/*Write a function that takes a Color and returns a string representing the color. Print the color in 
main based on the favoriteColor value*/

//Author name- Atul Lamkhade

#include <stdio.h>

// enum for colors
typedef enum {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    UNKNOWN
} Color;

const char* getColorName(Color color) {
    switch (color) {
        case RED:
            return "Red";
        case GREEN:
            return "Green";
        case BLUE:
            return "Blue";
        case YELLOW:
            return "Yellow";
        default:
            return "Unknown Color";
    }
}

int main() {
    
    Color favoriteColor = BLUE;
    printf("Your favorite color is: %s\n", getColorName(favoriteColor));

    return 0;
}

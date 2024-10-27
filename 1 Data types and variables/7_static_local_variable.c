//To write C program with static local variable named counter which should count from1 to 5.

// Author name-Atul Lamkhade


#include<stdio.h>
void counter()
{
    static int count = 0;
    count++;
    printf("Count:%d\n",count);

}
int main()
{
    counter();
    counter();
    counter();
    counter();
    counter();

    return 0;
}
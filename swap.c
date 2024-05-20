#include <stdio.h>

int main()
{
    int x = 20;
    int y = 50;

    printf("x is %i\n", x);
    printf("y is %i\n", y);

    int temp;
    x = y;
    y = temp;


    printf("x is now %i\n", x);
    printf("y is now %i\n", y);
}
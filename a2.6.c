/*
CH-230-A
a2 p6.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
#include <stdio.h>

int main()
{

    double x, y; // declares x and y

    // input
    scanf("%lf", &x);
    scanf("%lf", &y);

    double *ptr_one, *ptr_two, *ptr_three; // declares pointers
    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;

    // Shows that first two pointers hold the same value and the third one is different
    printf("%p", ptr_one);
    printf(" = %p\n", ptr_two);
    printf("%p\n", *ptr_three);

    return 0;
}
/*
CH-230-A
a2 p1.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
#include <stdio.h>

int main()
{
    double double1, double2; /* determines the variables */
    int int1, int2; /* determines the variables */
    char char1, char2; /* determines the variables */
    
    scanf("%lf/n", & double1); /* input code */
    scanf("%lf/n", & double2); /* input code */
    scanf("%d/n", & int1); /* input code */
    scanf("%d/n", & int2); /* input code */
    scanf(" %c/n", & char1); /* input code */
    scanf(" %c/n", & char2); /* input code */
    
    printf("sum of doubles=%lf\n", double1 + double2);
    printf("difference=%lf\n", double1 - double2);
    printf("square=%lf\n", double1 * double1);
    printf("sum of integers=%d\n", int1 + int2);
    printf("product of integers=%d\n", int1 * int2);
    printf("sum of chars=%d\n", char1 + char2);
    printf("product of chars=%d\n", char1 * char2);
    printf("sum of chars=%c\n", char1 + char2);
    printf("product of chars=%c\n", char1 * char2); /* results */

    return 0;
}
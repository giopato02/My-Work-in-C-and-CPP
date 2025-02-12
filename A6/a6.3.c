/*
CH-230-A
a6 p3.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
// #include <stdio.h>

// // Define a macro to compute the minimum
// #define MIN(a, b) ((a) > (b) ? (b) : (a))
// // Define a macro to compute the maximum
// #define MAX(a, b) ((a) > (b) ? (a) : (b))
// // Define a macro to divide a number by 2.0 (for floating-point division)
// #define DIV(x) ((x) / 2.0)

// int main()
// {
//     int a, b, c;
//     scanf("%d", &a);
//     scanf("%d", &b);
//     scanf("%d", &c);

//     printf("The mid-range is: %.6f", DIV(MIN(c, MIN(a, b)) + MAX(c, MAX(a, b))));
// }

#include <stdio.h>

#define MIN(num1, num2) ((num1 > num2) ? num2 : num1)
#define MAX(n1, n2) ((n1 > n2) ? n1 : n2)
#define min(a,b,c) MIN(c, (MIN (a, b)))
#define max(a,b,c) MAX(c, (MAX (a, b)))
#define MID(a,b,c) (((float)(min(a, b, c)  + max(a, b, c))) / 2.0)

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c); 
    
    float mid = MID(a,b,c);
    
    printf("The mid-range: %.6f", mid );

    return 0;
}
/*
CH-230-A
a6 p1.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
// #include <stdio.h>

// // Macro to swap two variables of a given type
// #define SWAP(a, b, type) \
//     do                   \
//     {                    \
//         type temp = a;   \
//         a = b;           \
//         b = temp;        \
//     } while (0)

// int main()
// {
//     int int1, int2;
//     double double1, double2;

//     // input code for two integers and two doubles
//     scanf("%d %d", &int1, &int2);
//     scanf("%lf %lf", &double1, &double2);

//     // Swapping the integers
//     SWAP(int1, int2, int);

//     // Swapping the doubles
//     SWAP(double1, double2, double);

//     // Printing the swapped values
//     printf("After swapping:\n");
//     printf("%d\n%d\n", int1, int2);
//     printf("%.6lf\n%.6lf\n", double1, double2);

//     return 0;
// }

// #include <stdio.h>

// #define swap(i, j, type) ({\
//     type temp = i; \
//     i = j;\
//     j = temp;\
//     })

// int main()
// {
//     int a, b;
//     double c, d;

//     scanf("%d %d", &a, &b);
//     scanf("%lf %lf", &c, &d);

//     swap(a, b, int);
//     swap(c, d, double);

//     printf("%d\n%d\n", a, b);
//     printf("%lf\n%lf\n", c, d);

//     return 0;
// }

#include <stdio.h>

#define swap(num1, num2, type) ({ \
    type temp = num1;             \
    num1 = num2;                  \
    num2 = temp;                  \
})

int main()
{
    int a, b;
    double c, d;

    scanf("%d %d", &a, &b);
    scanf("%lf %lf", &c, &d);

    swap(a, b, int);
    swap(c, d, double);
    printf("%d\n%d\n", a, b);
    printf("%lf\n%lf\n", c, d);

    return 0;
}
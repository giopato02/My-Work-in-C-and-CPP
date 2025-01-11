/*
CH-230-A
a3 p6.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
// #include <stdio.h>

// float to_pounds(int kg, int g)
// {
//     return (kg + g / 1000.0) * 2.2;
// }

// int main()
// {

//     float kg, g;

//     scanf("%f%f", &kg, &g);

//     printf("Result of conversion: %f", to_pounds(kg, g));

//     return 0;
// }

#include <stdio.h>

float to_pounds(int kg, int g)
{
    float pounds;
    pounds = (kg + (g * 0.001)) * 2.2;
    return pounds;
}

int main()
{
    int kg, g;
    printf("Enter kgs: ");
    scanf("%d", &kg);
    printf("Enter grams: ");
    scanf("%d", &g);

    printf("Result of Conversion to pounds: %f", to_pounds(kg, g));

    return 0;
}
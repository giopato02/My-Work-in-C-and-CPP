/*
CH-230-A
a4 p1.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     float low_lim, up_lim, step_size;

//     // Input code for lower limit, upper limit and step size
//     printf("Enter the lower limit: ");
//     scanf("%f", &low_lim);
//     printf("Enter the upper limit: ");
//     scanf("%f", &up_lim);
//     printf("Enter the step size for the table: ");
//     scanf("%f", &step_size);

//     // Looping the values from low_lim to up_lim by step_size
//     for (float x = low_lim; x <= up_lim; x += step_size)
//     {
//         // Calculating the area and perimeter
//         float area = M_PI * x * x;
//         float perimeter = 2 * M_PI * x;

//         printf("%f; %f; %f\n", x, area, perimeter);
//     }
//     return 0;
// }


#include <stdio.h>
#include <math.h>

int main()
{
    float lower, upper, step_size;
    double area, perimeter;

    printf("Enter lower limit: ");
    scanf("%f", &lower);
    printf("Enter upper limit: ");
    scanf("%f", &upper);
    printf("Enter step size: ");
    scanf("%f", &step_size);

    for(float x = lower; x <= upper; x += step_size)
    {
        area = M_PI * (x*x);
        perimeter = 2 * M_PI * x;
        printf("%f %lf %lf\n", x, area, perimeter);
    }

    return 0;
}
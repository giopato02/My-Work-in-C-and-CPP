/*
CH-230-A
a4 p10.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
#include <stdio.h>
#include <math.h>

void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb)
{
    *prod = a * b;    // Product
    *div = a / b;     // Division
    *pwr = pow(a, b); // Power
    *invb = 1.0 / b;  // Inverse of b
}

int main()
{
    float a, b;
    float prod, div, pwr, invb;

    // Input code
    printf("Enter two float numbers (a and b): \n");
    scanf("%f %f", &a, &b);

    // Call the function
    proddivpowinv(a, b, &prod, &div, &pwr, &invb);

    // Print code
    printf("Product=%f\n", prod);
    printf("Division=%f\n", div);
    printf("Power=%f\n", pwr);
    printf("Inverse of b=%f\n", invb);

    return 0;
}
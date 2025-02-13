/*
CH-230-A
a6 p4.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
#include <stdio.h>
#define INTERMEDIATE

int main()
{
    int n; // Dimension of the vectors

    // input code
    scanf("%d", &n);

    int x[n], y[n];         // Vectors x and y
    int scalar_product = 0; // To store the final scalar product result

    // inpout code for the components of vector x
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    // input code for the components of vector y
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &y[i]);
    }

    // Calculate the scalar product
#ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
#endif
    for (int i = 0; i < n; i++)
    {
        int product = x[i] * y[i]; // Intermediate product
        scalar_product += product; // Add to the scalar product
#ifdef INTERMEDIATE
        printf("%d\n", product); // Print intermediate product if INTERMEDIATE is defined
#endif
    }

    // Print the final scalar product
    printf("The scalar product is: %d\n", scalar_product);

    return 0;
}
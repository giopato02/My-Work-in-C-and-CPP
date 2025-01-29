/*
CH-230-A
a5 p5.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
#include <stdio.h>

// Function for the scalar product
double scalar_product(double v[], double w[], int n)
{
    double product = 0.0;
    for (int i = 0; i < n; i++)
    {
        product += v[i] * w[i];
    }
    return product;
}

// Function for the smallest component and its position
void find_smallest(double arr[], int n, double *min_value, int *min_pos)
{
    *min_value = arr[0];
    *min_pos = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < *min_value)
        {
            *min_value = arr[i];
            *min_pos = i;
        }
    }
}

// Function for the largest component and its position
void find_largest(double arr[], int n, double *max_value, int *max_pos)
{
    *max_value = arr[0];
    *max_pos = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > *max_value)
        {
            *max_value = arr[i];
            *max_pos = i;
        }
    }
}

int main()
{
    int n;

    // input codde for the number of components
    printf("Enter the number of components: ");
    scanf("%d", &n);

    double v[n], w[n];

    // input code for vector v
    printf("Enter the components of vector v:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &v[i]);
    }

    // input code for vector w
    printf("Enter the components of vector w:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &w[i]);
    }

    // call the functions:
    double product = scalar_product(v, w, n);
    printf("Scalar product = %lf\n", product);

    double min_value, max_value;
    int min_pos, max_pos;

    find_smallest(v, n, &min_value, &min_pos);
    printf("The smallest = %lf\n", min_value);
    printf("Position of smallest = %d\n", min_pos);

    find_largest(v, n, &max_value, &max_pos);
    printf("The largest = %lf\n", max_value);
    printf("Position of largest = %d\n", max_pos);

    find_smallest(w, n, &min_value, &min_pos);
    printf("The smallest = %lf\n", min_value);
    printf("Position of smallest = %d\n", min_pos);

    find_largest(w, n, &max_value, &max_pos);
    printf("The largest = %lf\n", max_value);
    printf("Position of largest = %d\n", max_pos);

    return 0;
}
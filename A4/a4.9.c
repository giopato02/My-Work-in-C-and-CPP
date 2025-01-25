/*
CH-230-A
a4 p9.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>

// Function finding the product of min and max elements
int prodminmax(int arr[], int n)
{
    int min = arr[0];
    int max = arr[0];

    // Finding the min and max elements
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    // Return the product of min and max elements
    return min * max;
}

int main()
{
    int n;

    scanf("%d", &n);

    // Using malloc for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    { // Check if malloc failed
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input code for the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Call the function and print
    int result = prodminmax(arr, n);
    printf("sum of min and max elements=%d\n", result);

    // Deallocate the memory
    free(arr);

    return 0;
}
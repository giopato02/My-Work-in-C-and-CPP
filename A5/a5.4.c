/*
CH-230-A
a5 p4.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
// #include <stdio.h>
// #include <stdlib.h>

// void divby5(float arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = arr[i] / 5.0; // divide each element by 5
//     }
// }

// int main()
// {
//     int n;

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     float *arr = (float *)malloc(n * sizeof(int));

//     if (arr == NULL)
//     {
//         return 1;
//     }

//     // Read the array elements from the user
//     printf("Enter the elements of the array:\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%f", &arr[i]);
//     }

//     // Print the array before division
//     printf("Before:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%.3f ", arr[i]);
//     }
//     printf("\n");

//     // call the function
//     divby5(arr, n);

//     // print after division
//     printf("After:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%.3f ", arr[i]);
//     }
//     printf("\n");

//     free(arr);

//     return 0;
// }

//Second Solution
#include <stdio.h>
#include <stdlib.h>

void divby5(float arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        arr[i] = arr[i] / 5.0;
    }
}   

int main()
{
    int n;

    scanf("%d", &n);
    float *arr = (float *)malloc(n * sizeof(float));

    
    for(int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }
    printf("Before:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%.3f ", arr[i]);
    }
    printf("\n");

    divby5(arr, n);
    printf("After:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%.3f ", arr[i]);
    }

    free(arr);
    return 0;
}
/*
CH-230-A
a4 p6.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n;
//     // Input code
//     scanf("%d", &n);

//     // Dynamically allocate an array of integers with n elements
//     int *arr = (int *)malloc(n * sizeof(int));
//     if (arr == NULL) // Check if memory allocation was successful
//     {
//         return 1; // Exit if failed
//     }

//     // Input code in the allocated array
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     // Initialize max and max2 to the first element of the array
//     int max = arr[0];
//     int max2 = arr[0];

//     // Find the largest and second largest numbers with a for loop
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > max)
//         {
//             max2 = max;
//             max = arr[i];
//         }
//         else if (arr[i] > max2)
//         {
//             max2 = arr[i];
//         }
//     }

//     printf("%d, %d\n", max, max2);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int max(int arr[], int a)
{
    int max;
    max = arr[0];
    for(int i = 0; i < a; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int max2(int arr[], int a)
{
    int max = arr[0];
    int max2 = arr[0];
    for(int i = 1; i < a; i++)
    {
        if(arr[i] > max)
        {
            max2 = max;
            max = arr[i];
        }
        else if(arr[i] > max2)
        {
            max2 = arr[i];
        }
    }
    return max2;
}

int main()
{
    int n;
    scanf("%d", &n);

    int *arr = (int *) malloc(n * sizeof(int));

    if(arr == NULL)
    {
        return 1;
    }

    for(int i = 0; i < n; i++)
    {
        printf("Enter #%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Max: %d\n", max(arr, n));
    printf("Second Max: %d\n", max2(arr, n));

    free(arr);

    // int max = arr[0];
    // int max2 = arr[0];

    // for(int i = 1; i < n; i++)
    // {
    //     if(arr[i] > max)
    //     {
    //         max2 = max;
    //         max = arr[i];
    //     }
    //     else if(arr[i] > max2)
    //     {
    //         max2 = arr[i];
    //     }
    // }
    // printf("%d %d", max, max2);

    return 0;
}

/*
Enter #1: 4 max max2
Enter #2: 16 max2 = 4; max = 16
Enter #3: 12 max2 = 12
Enter #4: 19 max2 = 16; max = 19
Enter #5: 32
Enter #6: 1
Enter #7: 1
Enter #8: 10
Enter #9: 78
Enter #10: 49
*/
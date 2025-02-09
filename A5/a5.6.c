/*
CH-230-A
a5 p6.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
#include <stdio.h>

void count(float *arr, int size)
{
    float *ptr = arr;        // Pointer to traverse the array
    float *end = arr + size; // Pointer to the end of the array

    // Traverse the array using pointers
    while (ptr < end && *ptr >= 0)
    {
        ptr++; // Move the pointer to the next element
    }

    // Calculate the distance between the starting pointer and the pointer that stopped at the negative value
    printf("Before the first negative value: %ld elements\n", ptr - arr);
}

int main()
{
    int n;

    // input code for the size of the array
    scanf("%d", &n);

    // Allocate memory for the array
    float arr[n];

    // input code for array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }

    // Call the function
    count(arr, n);

    return 0;
}
/*
CH-230-A
a5 p9.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>

// Function to dynamically allocate a 3D array
int ***allocate3DArray(int rows, int cols, int depth)
{
    int ***array = (int ***)malloc(rows * sizeof(int **)); // Allocate memory for row pointers
    for (int i = 0; i < rows; i++)
    {
        array[i] = (int **)malloc(cols * sizeof(int *)); // Allocate memory for column pointers
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = (int *)malloc(depth * sizeof(int)); // Allocate memory for depth elements
        }
    }
    return array;
}

// Function to deallocate the 3D array
void free3DArray(int ***array, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            free(array[i][j]); // Free depth elements
        }
        free(array[i]); // Free column pointers
    }
    free(array); // Free row pointers
}

// Function to read a 3D array
void read3DArray(int ***array, int rows, int cols, int depth)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            for (int k = 0; k < depth; k++)
            {
                scanf("%d", &array[i][j][k]);
            }
        }
    }
}

// Function to print the 2D sections parallel to the "XOY axis"
void printSections(int ***array, int rows, int cols, int depth)
{
    for (int k = 0; k < depth; k++)
    { // Iterate over depth
        printf("Section %d:\n", k + 1);
        for (int i = 0; i < rows; i++)
        { // Print each 2D section for a fixed depth
            for (int j = 0; j < cols; j++)
            {
                printf("%d ", array[i][j][k]);
            }
            printf("\n");
        }
    }
}

int main()
{
    int rows, cols, depth;

    // input code for the dimensions of the 3D array
    scanf("%d %d %d", &rows, &cols, &depth);

    // allocate memory for the 3D array
    int ***array = allocate3DArray(rows, cols, depth);

    // input code for the the elements of the 3D array
    read3DArray(array, rows, cols, depth);

    // print the sections parallel to the "XOY axis"
    printSections(array, rows, cols, depth);

    // free the dynamically allocated memory
    free3DArray(array, rows, cols);

    return 0;
}

/*
CH-230-A
a5 p8.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory for a matrix of size rows x cols
int **allocateMatrix(int rows, int cols)
{
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }
    return matrix;
}

// Function to free the allocated memory for a matrix
void freeMatrix(int **matrix, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}

// Function to read a matrix of size rows x cols from input
void readMatrix(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print a matrix of size rows x cols
void printMatrix(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply two matrices
int **multiplyMatrices(int **A, int **B, int n, int m, int p)
{
    int **result = allocateMatrix(n, p);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return result;
}

int main()
{
    int n, m, p;

    // Read dimensions of matrices
    scanf("%d %d %d", &n, &m, &p);

    // Dynamically allocate memory for matrix A (n x m) and matrix B (m x p)
    int **A = allocateMatrix(n, m);
    int **B = allocateMatrix(m, p);

    // input code for matrix A
    printf("Matrix A:\n");
    readMatrix(A, n, m);

    // input code for matrix B
    printf("Matrix B:\n");
    readMatrix(B, m, p);

    // Multiply matrices A and B
    int **result = multiplyMatrices(A, B, n, m, p);

    // Print matrix A
    printf("Matrix A:\n");
    printMatrix(A, n, m);

    // Print matrix B
    printf("Matrix B:\n");
    printMatrix(B, m, p);

    // Print the result
    printf("The multiplication result AxB:\n");
    printMatrix(result, n, p);

    // Free allocated memory
    freeMatrix(A, n);
    freeMatrix(B, m);
    freeMatrix(result, n);

    return 0;
}
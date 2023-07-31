/**
 * main - Entry point of the program
 *
 * This program takes user input for two 3x3 matrices, A and B,
 * calculates the element-wise multiplication of A and B to form a new matrix C,
 * and then displays matrix C.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

#define n 3
#define m 3
#define p 3

// Function to perform matrix multiplication
void matrixMultiplication(int A[n][m], int B[m][p], int C[n][p]) 
{
    int i, j, k;

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < p; j++) 
        {
            C[i][j] = 0;
            for (k = 0; k < m; k++) 
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[n][p]) 
{
    int i, j;
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < p; j++) 
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int A[n][m], B[m][p], C[n][p];
    int i, j;

    printf("Enter elements of Matrix A (%dx%d):\n", n, m);
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B (%dx%d):\n", m, p);
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < p; j++) 
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Perform matrix multiplication
    matrixMultiplication(A, B, C);

    printf("Matrix A:\n");
    displayMatrix(A);

    printf("\nMatrix B:\n");
    displayMatrix(B);

    printf("\nResulting Matrix C:\n");
    displayMatrix(C);

    return 0;
}

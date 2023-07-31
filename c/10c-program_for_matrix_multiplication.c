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

// Function to perform matrix multiplication
void matrixMultiplication(int A_rows, int A_cols, int B_rows, int B_cols, int A[A_rows][A_cols], int B[B_rows][B_cols], int C[A_rows][B_cols]) {
    int i, j, k;

    for (i = 0; i < A_rows; i++) 
    {
        for (j = 0; j < B_cols; j++) 
        {
            C[i][j] = 0;
            for (k = 0; k < A_cols; k++) 
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int rows, int cols, int matrix[rows][cols]) 
{
    int i, j;
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int A_rows, A_cols, B_rows, B_cols;
    int i, j;

    printf("Enter the number of rows for Matrix A: ");
    scanf("%d", &A_rows);
    printf("Enter the number of columns for Matrix A: ");
    scanf("%d", &A_cols);

    printf("Enter elements of Matrix A (%dx%d):\n", A_rows, A_cols);
    int A[A_rows][A_cols];
    for (i = 0; i < A_rows; i++) 
    {
        for (j = 0; j < A_cols; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the number of rows for Matrix B: ");
    scanf("%d", &B_rows);
    printf("Enter the number of columns for Matrix B: ");
    scanf("%d", &B_cols);

    printf("Enter elements of Matrix B (%dx%d):\n", B_rows, B_cols);
    int B[B_rows][B_cols];
    for (i = 0; i < B_rows; i++) 
    {
        for (j = 0; j < B_cols; j++) 
        {
            scanf("%d", &B[i][j]);
        }
    }

    if (A_cols != B_rows) {
        printf("Matrix multiplication not possible. Number of columns in Matrix A must be equal to the number of rows in Matrix B.\n");
        return 1;
    }

    int C[A_rows][B_cols];
    // Perform matrix multiplication
    matrixMultiplication(A_rows, A_cols, B_rows, B_cols, A, B, C);

    printf("Matrix A:\n");
    displayMatrix(A_rows, A_cols, A);

    printf("\nMatrix B:\n");
    displayMatrix(B_rows, B_cols, B);

    printf("\nResulting Matrix C:\n");
    displayMatrix(A_rows, B_cols, C);

    return 0;
}

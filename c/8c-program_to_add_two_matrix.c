#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program takes user input for two 2x3 matrices, A and B,
 * adds their corresponding elements to form a new matrix C,
 * and then displays matrix C.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a[2][3], b[2][3], c[2][3], i, j;

    printf("Enter Matrix A:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter Matrix B:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Matrix C (Sum of A and B):\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return (0);
}


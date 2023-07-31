#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program takes user input for two 3x3 matrices, A and B,
 * calculates the element-wise multiplication of A and B to form a new matrix C,
 * and then displays matrix C.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a[3][3], b[3][3], c[3][3], i, j;

    printf("Enter Value of a:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter Value of b:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Multiplication of matrix C:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = (a[i][j]) * (b[j][i]);
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return (0);
}


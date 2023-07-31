#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program takes user input to fill a 2x3 matrix,
 * displays the matrix, and calculates the sum of all elements.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a[2][3], i, j, sum = 0;

    printf("Enter elements of the array:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix is:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \t", a[i][j]);
            sum += a[i][j];
        }
        printf("\n");
    }

    printf("\n Sum = %d", sum);

    return 0;
}


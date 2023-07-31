#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program takes user input to fill a 2x3 matrix,
 * displays its transposed matrix, and then returns 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a[2][3], i, j;

    printf("Enter elements of the array:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Transposed matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }

    return (0);
}


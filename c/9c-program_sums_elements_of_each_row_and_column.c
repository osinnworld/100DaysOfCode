#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program takes user input to fill a 3x3 matrix,
 * displays the matrix, sums the elements of each row and column,
 * and then displays the totals of each row and column next to the matrix.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a[3][3], i, j, sr = 0, sc[3] = {0}; // Initialize sr and sc to 0

    printf("Enter elements of the array:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
            sr += a[i][j];        // Sum elements of the current row
            sc[j] += a[i][j];     // Sum elements of the current column
        }
        printf("| %d\n", sr);    // Display total of the current row to the immediate left
        sr = 0;                  // Reset row sum for the next row
    }

    // Display column totals below the last digit of each column
    for (j = 0; j < 3; j++)
    {
        printf("------"); // Print a horizontal separator line
    }
    printf("\n");
    for (j = 0; j < 3; j++)
    {
        printf("%d\t", sc[j]); // Display total of the current column below the last digit
    }
    printf("\n");

    return 0;
}

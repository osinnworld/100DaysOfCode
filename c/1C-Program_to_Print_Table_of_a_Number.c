/** 
 * This program takes a constant and a variable as input from the user and 
 * prints the multiplication table of the constant up to the given variable.
 */

#include <stdio.h>

int main(void)
{
    int i, j, a, total;

    // Get the constant from the user
    printf("Enter 1-constant: ");
    scanf("%d", &i);

    // Get the variable from the user
    printf("Enter 1-variable: ");
    scanf("%d", &a);

    // Calculate and print the multiplication table
    for (j = 0; j <= a; j++)
    {
        total = i * j;
        printf("%d x %d = %d\n", i, j, total);
    }

    return 0;
}


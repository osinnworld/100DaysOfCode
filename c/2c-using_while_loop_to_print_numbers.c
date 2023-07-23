#include <stdio.h>

/**
 * This program prints numbers from 0 to 10 using a while loop.
 */

int main(void)
{
    int i = 0; // Initialize the variable 'i' to 0.

    // Use a while loop to print numbers from 0 to 10 (inclusive).
    while (i <= 10)
    {
        printf("%d\n", i); // Print the current value of 'i'.
        i++; // Increment 'i' to move to the next number.
    }

    return 0;
}


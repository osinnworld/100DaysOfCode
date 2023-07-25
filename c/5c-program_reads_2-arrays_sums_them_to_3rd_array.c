#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program takes two integer arrays of size 5,
 * calculates the sum of corresponding elements, and prints the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, arr1[5], arr2[5], sumarr[5];

	printf("Enter 5 numbers for arr1:\n");
	for (i = 0; i < 5; i++)
		scanf("%d", &arr1[i]);

	printf("Enter 5 numbers for arr2:\n");
	for (i = 0; i < 5; i++)
		scanf("%d", &arr2[i]);

	for (i = 0; i < 5; i++) {
		sumarr[i] = arr1[i] + arr2[i];
		printf("Summary element at index %d is: %d\n", i, sumarr[i]);
	}

	return (0);
}

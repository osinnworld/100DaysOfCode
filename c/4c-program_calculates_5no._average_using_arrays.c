/*
 * Title: Average of Five Marks
 * Description: This program takes five marks as input and calculates their average.
 */

#include <stdio.h>

int main(void)
{
    int marks[5];
    int sum = 0;
    int avg;
    int i;

    printf("Enter five marks below:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    avg = sum / 5;
    printf("Average is: %d\n", avg);

    return 0;
}


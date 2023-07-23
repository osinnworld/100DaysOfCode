/*
 * Title: Reverse Numbers
 * Description: This program reads five numbers from the user and then prints them in reverse order.
 */

#include <stdio.h>

int main(void)
{
    int a[5], i;

    printf("Enter five numbers:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Here are the numbers in reverse order: ");
    for (i = 4; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}


#include "main.h"
#include <stdio.h>

/**
 * print_array - Write a function that prints
 * n elements of an array of integers
 * @a: in a pointer
 * @n: in an int.
 * return : always a.
 */

void print_array(int *a, int n)
{
    int b;

    for (b = 0; b < n; b++)
    {
        if (b == 0)
            printf("%d", a[b]);
        else
            printf(", %d", a[b]);
    }
    printf("\n");
}

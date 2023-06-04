#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Write a function that reverses the
 * content of an array of integers.
 * @a: is an array.
 * @n: is an int
 * Return: always
 */

void reverse_array(int *a, int n)
{
    int i;
    int array[1000];
    int o = 0;

    for (i = n - 1; i >= 0; i--)
    {
        array[o] = a[i];
        o++;
    }
    for (i = 0; i < n; i++)
    {
        a[i] = array[i];
    }
}

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
int array[100];
int o = 0;
int j;

for (i = n; i >= 0; i--)
{
array[o] = a[i];
o++;
}
for (j = 0; j < n; j++)
{
a[j] = array[j];
}
}


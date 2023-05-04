#include "main.h"
#include <stdio.h>

/**
 * _strncat - Write a function that concatenates two strings
 * @dest: is a pointer.
 * @src: is a pointer.
 * @n: is an int
 * Return: always
 */

char *_strncat(char *dest, char *src, int n)
{
int a, b;

for (a = 0; dest[a] != '\0'; a++)
{
;
}
for (b = 0; b < n && src[b] != '\0'; b++, a++)
{
dest[a] = src[b];
}
dest[a] = '\0';
return (dest);
}


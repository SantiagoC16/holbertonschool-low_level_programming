#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Write a function that concatenates two strings
 * @dest: is a pointer.
 * @src: is a pointer.
 * @n: is an int
 * Return: always
 */

char *_strncpy(char *dest, char *src, int n)
{
    int a;

    for (a = 0; a < n && src[a] != '\0'; a++)
        dest[a] = src[a];
    for (; a < n; a++)
        dest[a] = '\0';
    return (dest);
}

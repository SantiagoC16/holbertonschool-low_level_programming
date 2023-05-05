#include "main.h"
#include <stdio.h>

/**
 * _strcat - Write a function that concatenates two strings
 * @dest: is a pointer.
 * @src: is a pointer.
 * Return: always
 */

char *_strcat(char *dest, char *src)
{
    int a, b;

    for (a = 0; dest[a] != '\0'; a++)
    {
        ;
    }
    for (b = 0; src[b] != '\0'; b++)
    {
        dest[a + b] = src[b];
    }
    dest[a + b] = '\0';
    return (dest);
}

#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Write a function that copies memory area
 * @dest: is an pointer
 * @src: is a pointer
 * @n: is an unsigned int
 * Return: always
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int cont;

    for (cont = 0; cont < n; cont++)
    {
        dest[cont] = src[cont];
    }
    return (dest);
}

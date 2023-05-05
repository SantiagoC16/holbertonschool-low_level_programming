#include "main.h"
#include <stdio.h>

/**
 * _memset - Write a function that fills memory with a constant byte
 * @s: is an pointer
 * @b: is a char
 * @n: is an unsigned int
 * Return: always
 */

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int a;

    for (a = 0; a < n; a++)
    {
        s[a] = b;
    }
    return (s);
}

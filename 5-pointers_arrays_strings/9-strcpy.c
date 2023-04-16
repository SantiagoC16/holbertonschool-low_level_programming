#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Write a function that copies the string pointed to
 * by src, including the terminating null byte
 * @dest: is a pointer.
 * @src: is a pointer.
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int a;

for (a = 0; src[a] != '\0'; a++)
dest[a] = src[a];
dest[a] = '\0';
return (dest);
}


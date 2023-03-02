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
int a;

int b = strlen(dest);
for (a = 0; src[a] != '\0'; a++)
dest[b] = dest[a + b];
dest[b] = '\0';
return (dest);
}

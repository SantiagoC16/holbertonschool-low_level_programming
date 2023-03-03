#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Write a function that concatenates two strings
 * @s1: is a pointer.
 * @s2: is a pointer.
 * Return: always
 */

int _strcmp(char *s1, char *s2)
{
int a;

for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
{
if (s1[a] != s2[a])
return (s1[a] - s2[a]);
}
}

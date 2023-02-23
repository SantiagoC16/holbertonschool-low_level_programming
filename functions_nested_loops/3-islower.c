#include "main.h"
#include <stdio.h>

/**
 * _islower - Write a function that checks for lowercase character.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
printf("%d", 1);
else (c >= 'A' && c <= 'Z')
printf("%d", 0);
return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * _islower - Write a function that checks for lowercase character.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}

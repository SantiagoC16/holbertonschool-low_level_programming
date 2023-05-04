#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Write a function that checks for alphabetic character.
 * @c: an int.
 * Return: Always 0.
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 122)
return (1);
return (0);
}

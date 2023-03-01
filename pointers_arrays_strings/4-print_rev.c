#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 * @s: is a string
 * return : always a.
 */

void print_rev(char *s)
{
int a;

int j = strlen(s);
for (a = (j - 1); a  >= 0 ; a--)
_putchar(s[a]);
}


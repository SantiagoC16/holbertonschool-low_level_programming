#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: is a string
 * return : always a.
 */

void puts_half(char *str)
{
int a;

int l = strlen(str);
int m = l / 2;
for (a = 0; a < m; a++)
{
putchar(str[a]);
}
{
putchar('\n');
}
}

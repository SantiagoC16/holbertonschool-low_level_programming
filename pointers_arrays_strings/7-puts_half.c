#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: is a string
 * return : always a.
 */

void puts_half(char *str)
{

int l = strlen(str);
int m;
if (l % 2 != 0)
{
	m = ((l - 1) / 2);
}
else
{
	m = l / 2;
	m = m + 1;
}
for (; m < l; m++)
{
putchar(str[m]);
}
{
putchar('\n');
}
}

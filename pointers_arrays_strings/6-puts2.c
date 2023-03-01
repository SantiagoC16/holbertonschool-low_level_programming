#include "main.h"
#include <stdio.h>

/**
 * puts2-print a string
 * @str: is a string
 * return : always a.
 */

void puts2(char *str)
{
int a;
int b = 0;

while (str[b] != '\0')
{
b++;
}
for (a = 0; a < b; a += 2)
{
putchar(str[a]);
}
putchar('\0');
}

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

for (a = 0; a != '\0'; a += 2)
{
putchar(str[a]);
}
}

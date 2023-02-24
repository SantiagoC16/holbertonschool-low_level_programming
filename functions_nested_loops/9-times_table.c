#include "main.h"
#include <stdio.h>

/**
 * times_table - Write a function that prints the 9 times table.
 * @a, @b, @c: an int.
 * Return:the last damage
 */
void times_table(void)
{
int a, b, c;
for (a = 0; a <= 9; a++)
{
_putchar(48);
for (b = 0; b <= 9; b++)
{
c = a * b;
_putchar(44);
_putchar(32);
if (c <= 9)
{
_putchar(32);
_putchar(c + 48);
}
else
{
_putchar((c / 10) + 48);
_putchar((c % 10) + 48);
}
}
_putchar('\n');
}
}

#include "main.h"
#include <stdio.h>

/**
 * times_table - Write a function that prints the 9 times table.
 * @n, @i: an int.
 * Return:the last damage
 */
void times_table(void)
{
int n;
int i;
for (n = 0; n < 10; n++)
{  
for (i = 0; i < 10; i++)   
printf("%d * %d = %d \n", n, i, n * i);
}
}

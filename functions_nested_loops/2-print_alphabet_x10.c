#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Write a function that prints the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char letter;
int i;
for (i = 0; i < 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
}
_putchar('\n');
return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Write a function that prints the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
        putchar(letter);

    putchar('\n');
}

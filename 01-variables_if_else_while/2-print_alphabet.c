#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase,
 * followed be a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
        putchar(letter);

    putchar('\n');
    return (0);
}

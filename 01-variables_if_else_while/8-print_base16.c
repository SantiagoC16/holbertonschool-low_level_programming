#include <stdio.h>
/**
 * main - Write a program that prints all the
 * numbers of base 16 in lowercase
 *
 * Return: Always 0.
 */

int main(void)
{
    int n;
    char letter;

    for (n = 0; n < 10; n++)
        putchar((n % 10) + '0');
    for (letter = 'a'; letter < 'g'; letter++)
        putchar(letter);

    putchar('\n');
    return (0);
}

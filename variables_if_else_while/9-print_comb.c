#include <stdio.h>
/*
 * main - Write a program that prints all possible combinations of
 * single-digit numbers.
 * Return: Always 0.
 */
int main(void)
{
int n;

for (n = 0; n < 10; n++)
putchar("%d, ", n);
putchar("\n");
return (0);
}

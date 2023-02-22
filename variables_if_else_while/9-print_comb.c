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
printf("%d, ", n);
printf("\n");
return (0);
}

#include <stdio.h>
/*
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

for (n = 0; n < 10; n = n++)
printf("%d", n);
return (0);
}

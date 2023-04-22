#include "main.h"

/**
 * main - fizz
 * Return: 0
 */

int main(void)
{
	fizz();
	return (0);
}

/**
 * fizz - fizz
 * Return: 0
 */
void fizz(void)
{
	int a;

	for (a = 1; a < 101; a++)
	{
		if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", a);
		}
		_putchar('\n');
	}
}

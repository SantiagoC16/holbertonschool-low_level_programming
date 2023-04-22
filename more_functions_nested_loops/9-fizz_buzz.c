#include "main.h"

/**
 * main - fizz
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 1; a < 101; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0 && a % 3 != 0)
		{
			if (a == 100)
			{
				printf("Buzz");
			}
			else
			{
			printf("Buzz ");
			}
		}
		else if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 != 0 || a % 5 != 0)
		{
			printf("%d ", a);
		}
	}
	putchar('\n');
	return (0);
}

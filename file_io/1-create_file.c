#include "main.h"

/**
 * create_file - is a function that create a file
 * @filename: is a pointer of const char
 * @text_content: a pointer char
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	FILE *c;

	c = fopen(filename, "w");
	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		return (0);
	}
	else
	{
		return (-2);
	}
	if (filename != NULL)
	{
		return (1);
	}
	else
	{
		return (-1);
	}

	fclose(c);
	return (0);
}

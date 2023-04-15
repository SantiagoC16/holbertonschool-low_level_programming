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

	if (filename == NULL || access(filename, R_OK | W_OK) == -1)
	{
		return (-1);
	}
	c = fopen(filename, "w");
	if (text_content != NULL)
	{
		fprintf(c, "%s", text_content);
		chmod(filename, 0600);
		if (filename != NULL)
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	else
	{
		ssize_t read_textfile(const char *filename, size_t letters);
	}
	fclose(c);
	return (1);
}

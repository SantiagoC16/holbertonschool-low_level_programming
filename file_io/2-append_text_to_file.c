#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @text_content: is a pointer char
 * @filename: is a pointer const char
 * Return: the converted number
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *a;
	char c;

	if (filename == NULL && access(filename, R_OK | W_OK) == -1)
	{
		return (-1);
	}
	a = fopen(filename, "r+");
	if (text_content != NULL)
	{
		fprintf(a, "%s", text_content);
		fseek(a, 0, SEEK_SET);
		while ((c = fgetc(a)) != EOF)
		{
			putchar (c);
			if (filename != NULL)
			{
				return (1);
			}
			else
			{
				return (-1);
			}
		}
	}

	else
	{
		ssize_t read_textfile(const char *filename, size_t letters);
	}
	fclose(a);
	return (1);
}

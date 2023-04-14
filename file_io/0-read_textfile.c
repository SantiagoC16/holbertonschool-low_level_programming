#include "main.h"

/**
 * read_textfile - a function that read a text file and print it
 * @filename: a pointer of const char
 * @letters: int
 * Return: the number of letter of the file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *text;
	char c;
	size_t letter;

	if (filename == NULL)
	{
		return (0);
	}
	text = fopen("text", "r");
	if (text == NULL)
	{
		return (0);
	}
	c = fgetc(text);
	while (c != 0 && !feof(text))
	{
		c = fgetc(text);
		letter++;
	}

	fclose(text);
	return (letter);
}

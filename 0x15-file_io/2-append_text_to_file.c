#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The NULL-terminated string to append to the file
 *
 * Return: 1 on success, or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	int result;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);

	result = fputs(text_content, file);
	fclose(file);

	return (result == EOF ? -1 : 1);
}

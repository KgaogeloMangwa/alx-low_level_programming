#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX stdout put
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	FILE *file;
	char *buffer;
	ssize_t read_bytes, write_bytes;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	buffer = malloc((letters + 1) * sizeof(char));

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	read_bytes = fread(buffer, sizeof(char), letters, file);
	if (read_bytes < 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (write_bytes < 0 || write_bytes != read_bytes)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	fclose(file);
	free(buffer);
	return (read_bytes);
}

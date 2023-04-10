#include "main.h"
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file -  a function that creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_dscrptr;
	ssize_t write_bytes;
	mode_t file_permission = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	file_dscrptr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, file_permission);
	if (file_dscrptr < 0)
		return (-1);

	if (text_content != NULL)
	{
		write_bytes = write(file_dscrptr, text_content, strlen(text_content));
		if (write_bytes < 0)
		{
			close(file_dscrptr);
			return (-1);
		}
	}

	close(file_dscrptr);
	return (1);
}

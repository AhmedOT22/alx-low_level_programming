#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: the file name
 * @text_content: the text content to write
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t bytes;
	int file;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (text_content != NULL)
	{
		bytes = write(file, text_content, strlen(text_content));

		if (bytes == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}

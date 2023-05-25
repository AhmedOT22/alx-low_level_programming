#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * 
 * @filename: the file name
 * @text_content: the text content to write
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, size;
	ssize_t bytes;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	for (size = 0; text_content[size]; size++)
		;

	bytes = write(file, text_content, size);

	if (bytes == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}

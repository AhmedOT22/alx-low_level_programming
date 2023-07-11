#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file to create
 * @text_content: NULL terminated string to to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, length, written_bytes;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(f);
		return (1);
	}

	for (length = 0; text_content[length]; length++)
		;

	written_bytes = write(f, text_content, length);
	if (written_bytes == -1)
	{
		close(f);
		return (-1);
	}

	close(f);
	return (1);
}

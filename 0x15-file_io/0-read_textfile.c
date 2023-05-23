#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: file path
 * @letters: list of characters to read and print
 *
 * Return: number of letters to read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t bytes, c;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters)
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	bytes = read(file, buffer, letters);
	if (bytes == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	c = write(STDOUT_FILENO, buffer, bytes);
	if (c == -1 && c != bytes)
	{
		free(buffer);
		close(file);
		return (0);
	}

	free(buffer);
	close(file);
	return (bytes);
}

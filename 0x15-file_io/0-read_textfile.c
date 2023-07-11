#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: name of the file
 * @letters: number of letters to read and print
 *
 * Return: the number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *buffer;
	ssize_t read_letters, printed_letters;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		close(f);
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(f);
		return (0);
	}

	read_letters = read(f, buffer, letters);
	if (read_letters == -1)
	{
		free(buffer);
		close(f);
		return (0);
	}

	printed_letters = write(STDOUT_FILENO, buffer, read_letters);
	if (printed_letters == -1)
	{
		free(buffer);
		close(f);
		return (0);
	}

	free(buffer);
	close(f);
	return (printed_letters);
}

#include <stdio.h>

/**
 * main - multiplies two numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success, 1 if fail
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error \n");
		return (1);
	}
	printf("%d \n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

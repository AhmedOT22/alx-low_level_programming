#include "3-calc.h"

/**
 * main - main function
 *
 * @argc: argument count
 * @argv: argument array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char s;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	f = get_op_func(argv[2]);

	if (!f)
	{
		printf("Error\n");
		exit(99);
	}

	s = *argv[2];

	if ((s == '/' || s == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = f(arg1, arg2);

	printf("%d\n", result);

	return (0);
}

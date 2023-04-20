#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name -  prints a name
 *
 * @name: pointer on the name to print
 * @f: pointer on the function print_name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

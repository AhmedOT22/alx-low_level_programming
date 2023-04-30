#include <stdio.h>
#include "lists.h"


/**
 * first - prints a string before the main function is executed
 */

void __attribute__((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}

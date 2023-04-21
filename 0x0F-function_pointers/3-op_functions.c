#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - addition operation
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction operation
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operation
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operation
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: the quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return the remainder of the addition operation
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: the modulo of a divided by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}

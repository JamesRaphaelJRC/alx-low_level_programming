#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Adds two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The sum of the two integers on success, something else otherwise.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The difference the two integers on success, something else otherwise
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The result of the multiplication of two integers on success,
 *		something else otherwise.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The result of the division of two a by b on success,
 *		something else otherwise.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calculates the modulus of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The result of the modulus of two a by b on success,
 *              something else otherwise.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

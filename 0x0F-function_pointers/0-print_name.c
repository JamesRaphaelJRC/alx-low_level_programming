#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: A function pointer that specifies how name is to be printed.
 *
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

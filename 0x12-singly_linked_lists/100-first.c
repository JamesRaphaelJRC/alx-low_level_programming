#include <stdio.h>

/**
 * print_first - Prints a string before main function is executed.
 * Return: void
 */
void print_first(void)__attribute__((constructor));
void print_first(void)
{
	printf("You're beat! and yet, you must allow,
			\nI bore my house upon my back!\n");
}

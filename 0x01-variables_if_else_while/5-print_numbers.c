#include <stdio.h>

/**
 * main - Prints all single digits of base 10 starting from 0.
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	putchar(10);
	return (0);
}

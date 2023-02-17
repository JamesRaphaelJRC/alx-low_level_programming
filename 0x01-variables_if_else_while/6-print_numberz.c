#include <stdio.h>

/**
 * main - Writes 0-9 to the output stream.
 *
 * Return: Always 0 (Successful).
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
		putchar(c);
	putchar(10);
	return (0);
}

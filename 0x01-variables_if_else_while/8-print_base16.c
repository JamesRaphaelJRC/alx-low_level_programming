#include <stdio.h>

/**
 * main - Writes all numbers of base 16 in lowercase, followed by a new line.
 *
 * Return: Always 0 (Successful).
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
		putchar(i);

	for (j = 97; j <= 102; j++)
		putchar(j);
	putchar(10);
	return (0);
}

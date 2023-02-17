#include <stdio.h>

/**
 * main - Writes alphabets in reverse order to the output stream.
 *
 * Return: Always 0 (Successful).
 */
int main(void)
{
	char n = 'z';

	while (n >= 'a')
		putchar(n--);
	putchar(10);
	return (0);
}

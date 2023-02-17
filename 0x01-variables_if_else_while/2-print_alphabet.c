#include <stdio.h>

/**
 * main - Writes alphabets a-z all in lower case to the standard output.
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}

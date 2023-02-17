#include <stdio.h>

/**
 * main - Writes the alphabets a-z without 'e' and 'q' to the output stream.
 *
 * Return: Always 0 (successful)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if ((i == 113) || (i == 101))
			continue;
		else
			putchar(i);
	}
	putchar(10);
	return (0);
}

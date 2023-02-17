#include <stdio.h>

/**
 * main - Writes all possible combinations of single digit numbers seperated
 * by ','
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int i, j;

	i = 48;
	j = 57;

	while (i <= j)
	{
		putchar(i);
		if (i < j)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar(10);
	return (0);
}

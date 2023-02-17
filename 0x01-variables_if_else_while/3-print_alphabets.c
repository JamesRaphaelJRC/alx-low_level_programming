#include <stdio.h>

/**
 * main - Writes alphabets a-z and A-Z in the same order to standard output
 * 
 * Return: Always 0 (successful)
 */
int main(void)
{
	char n;

	n = 'a';

	while (n <= 'z')
		putchar(n++);
	
	n = 'A';

	while (n <= 'Z')
		putchar(n++);

	putchar(10);
	return (0);
}

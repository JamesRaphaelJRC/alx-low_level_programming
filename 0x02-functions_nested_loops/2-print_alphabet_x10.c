#include "main.h"

/**
 * print_alphabet_x10 - Prints all the alphabets in 10 places
 *				using the _putchar function in our "main.h" header-file.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char _char1, _char2;
	int i;

	for (i = 0; i < 10; i++)
	{
		_char1 = 'a';
		_char2 = 'z';
		while (_char1 <= _char2)
		{
			_putchar(_char1);
			_char1++;
		}
		_putchar('\n');
	}
}

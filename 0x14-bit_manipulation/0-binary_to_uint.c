#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - Converts binary to an unsigned int.
 * @b: A string of 0s and 1s ( The binary).
 *
 * Return: The binary in an unsigned int form or 0 when b contains anything
 *		outside 0 and 1.
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int uint = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		uint <<= 1;
		if (*b == '1')
			uint += 1;

		b++;
	}

	return (uint);
}

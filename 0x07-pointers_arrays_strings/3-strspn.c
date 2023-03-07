#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: A pointer pointing to the string whose substring will be evaluated.
 * @accept: Points to the string to be used for evaluation.
 *
 * Return: An unsigned int value equivalent to the number of characters
 * of the accept string present in the s string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int total = 0, i = 0, j = 0;

	while (s[i] != ' ')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				total += 1;
			j++;
		}
		j = 0;
		i++;
	}
	return (total);
}

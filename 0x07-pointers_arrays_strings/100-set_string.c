#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: A double pointer pointing to the variable to be reseted.
 * @to: A pointer pointing to the string to be set at s.
 *
 * Return: Void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

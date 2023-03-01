#include "main.h"

/**
  * _strcat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  *
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int a = 0, i;

	while (dest[a])
	{
		a++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[a] = src[i];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}

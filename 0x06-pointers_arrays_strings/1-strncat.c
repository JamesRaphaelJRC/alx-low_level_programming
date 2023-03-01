/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int s_len = 0, j = 0;

	while (dest[s_len])
	{
		s_len++;
	}

	while (j < n && src[j])
	{
		dest[s_len] = src[j];
		s_len++;
		j++;
	}

	dest[s_len + n + 1] = '\0';

	return (dest);
}

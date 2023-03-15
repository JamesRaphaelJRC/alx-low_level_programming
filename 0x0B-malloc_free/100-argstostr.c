#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: Number of arguments in the program.
 * @av: Pointer to the array of arguments of the program.
 *
 * Return: NULL if ac is 0 av is NULL or not enough memory.
 *		A pointer to the new string if successful.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, arg_len, tot_arg = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		arg_len = 0;
		for (j = 0; av[i][arg_len] != '\0'; j++)
			arg_len++;
		tot_arg += arg_len + 1;
	}
	str = (char *) malloc(tot_arg * sizeof(char));
	if (str == NULL)
		return (NULL);
	for  (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}

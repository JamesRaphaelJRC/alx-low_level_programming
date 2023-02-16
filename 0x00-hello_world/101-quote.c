#include <stdio.h>

/**
 *main -  Prints "and that piece of art is useful\" - Dora Korpar, 2015-10-19",
 *                followed by a new line, to standard error.
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, sizeof(str)-1, 1, stderr);
	return (1);
}

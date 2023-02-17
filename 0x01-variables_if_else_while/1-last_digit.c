#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time the program is
 * executed,print the last digit and state if it is less than, greater
 * than or equal to zero
 *
 * Return: 0 always (Successful)
 */
int main(void)
{
	int n, _digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	_digit = n % 10;

	if (_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, _digit);
	else if (_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, _digit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, _digit);
	return (0);
}

#include <stdio.h>
#include <time.h>

/**
 * main - main program
 *
 * A program that assigns random numbers
 * to the variable n
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is 0\n", n);
	return (0);
}

#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - function that determines if an integer
 * is a prime number or not
 * @n: number to evaluate
 * Return: 1 if n is a prime number, o if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - function that calculates if a number
 * is prime recursively or not
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if n is prime, o if not
 */
int actual_prime(int n, int i)
{
	if (1 == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

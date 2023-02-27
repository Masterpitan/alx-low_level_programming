#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: pointer to string
 */
void print_rev(char *s)
{
	int a, b, c;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	c = a;

	for (b = c - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}

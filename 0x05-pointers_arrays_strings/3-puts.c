#include "main.h"
/**
 * _puts - function that prints string to stdout
 * @str: pointer to string print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

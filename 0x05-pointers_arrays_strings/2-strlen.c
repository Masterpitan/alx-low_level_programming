#include "main.h"
/**
 * _strlen - function that prints the length of a string
 * @s: string to evaluate
 * Return: length of string
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}

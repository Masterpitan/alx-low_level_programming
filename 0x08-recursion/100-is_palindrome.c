#include "main.h"
/**
 * _strlen_recursion - function that prints size
 * @s:pointer to string palindrome
 * Return: recursion
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - function that prints palindrome
 * @s: pointer to string
 * @l: position
 * Return: boolena
 * 

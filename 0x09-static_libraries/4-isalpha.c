#include "main.h"

/**
 * _isalpha - check the code for techies.
 *
 * @c: is c an integer argument
 *
 * Return: (0)
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}


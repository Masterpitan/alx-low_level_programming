#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: the first string to compare
 * @s2: the second string to compare
 * Return: give less than o if s1 is less than s2, give 0 if they are equal,
 * give more than 0 if s1 appears greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

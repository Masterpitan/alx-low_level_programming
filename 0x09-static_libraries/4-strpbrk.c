#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string containing the bytes to search
 * Return: pointer to byte in s that matches one of bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
			s++;
		}
		return (NULL);
}


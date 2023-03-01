#include "main.h"
/**
 * rot13 - function that encodes a string in rot13
 * @s: string to be encoded
 * Return: the resulting string
 */
char *rot13(char *s)
{
	int i, j;

	char a[] = "AEIOUaeiou";
	char b[] = "PBTDKGpbtdkg;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = o; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
		}
	}
	return (s);
}

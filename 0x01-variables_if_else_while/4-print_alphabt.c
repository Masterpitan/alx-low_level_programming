#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase and new line
 *
 * Return: 0 on success
 */
int main(void)
{
	char lc = 'a';

	while (lc <= 'z')
	{
		if (lc != 'q' && lc != 'e')
		{
			putchar(lc);
		}
		lc++;
	}
	putchar('\n');
	return (0);
}


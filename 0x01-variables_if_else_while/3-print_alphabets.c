#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase and then in uppercase
 * Return: 0 on success
 */
int main(void)
{
	char lc = 'a';
	char uc = 'A';

	while (lc <= 'z')
	{
		putchar(lc);
		lc++;
	}
	while (uc <= 'Z')
	{
		putchar(uc);
		uc++;
	}
	putchar('\n');
	return (0);
}

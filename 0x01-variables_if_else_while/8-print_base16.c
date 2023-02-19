#include <stdio.h>
/**
 * main - A program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0 0n success
 */

int main(void)
{
	char n = '0';
	char a = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

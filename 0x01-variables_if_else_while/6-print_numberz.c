#include <stdio.h>
/**
 * main - A program that prints all single digit numbers of base 10
 *
 * Return: 0 on success
 */

int main(void)
{
	int b = '0';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}

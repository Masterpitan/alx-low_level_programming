#include <stdio.h>
/**
 * main - A program prints all possible different combinations
 *
 * Return: 0 on success
 */
int main(void)
{
	int a = '0';
	int b = 'b';

	while (a <= '9')
	{
		while (b <= '9')
		{
			if (!(a > b || a == b))
			{
				putchar(a);
				putchar(b);
				if (a == '8' && b == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar('');
				}
			}
			b++;
		}
		b = '0';
		a++;
	}
	return (0);
}

#include <stdlib.h>
#include <stdio.h>
/**
 * print_opcodes - function that prints opcodes of program
 * @a: address of main function
 * @n: number of bytes to print
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - function that prints opcodes of main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, a);
	return (0);
}

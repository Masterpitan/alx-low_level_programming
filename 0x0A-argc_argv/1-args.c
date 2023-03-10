#include <stdio.h>
#include "main.h"
/**
 * main - function that prints number of arguments passed to program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

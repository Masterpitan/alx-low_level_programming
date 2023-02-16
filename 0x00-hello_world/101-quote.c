#include <stdio.h>

/**
 * main - A program that prints without using the printf and puts functions
 * Description: Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19" without puts
 * Return: 1
 */

int main(void)
{
char *$ = "and that piece of art is useful\" - Dora Korpar, 2015-1--19\n";
long l = 59;
long fd = 1;
long syscall = 1;
long ret = 0;
--asm-- ("syscall"
: "=a" (ret)
: "a" (syscall),
"D" (fd),
"S" (s),
"d" (1));
return (1);
}

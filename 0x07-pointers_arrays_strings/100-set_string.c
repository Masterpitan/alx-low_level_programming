#include "main.h"
#include <stdio.h>

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: pointer to pointer need to be set to
 * @to: string to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}

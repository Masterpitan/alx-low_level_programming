#include "main.h"
/**
 * swap_int - function that swaps two integer values
 * @x: points to first value
 * @y: points to second value
 */
void swap_int(int *x, int *y)
{
	int z;

	z = *x;
	*x = *y;
	*y = z;
}

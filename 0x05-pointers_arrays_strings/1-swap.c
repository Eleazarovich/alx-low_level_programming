#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: fisrt pointer
 * @b: second pointer
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a, d = *b;
	*a = d, *b = c;
}

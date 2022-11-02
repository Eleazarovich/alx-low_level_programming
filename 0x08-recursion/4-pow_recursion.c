#include "main.h"

/**
 * _pow_recursion - returns the value of (x ^ y)
 * @x: base
 * @y: exponent
 * Return: (x ^ y)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (x == 1 || y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

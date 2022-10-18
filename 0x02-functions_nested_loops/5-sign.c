#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Takes in a num
 * Return: 1 for +ve mums. 0 for 0. -1 for -ve nums
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}


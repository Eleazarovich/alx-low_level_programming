#include "main.h"

/**
 * print_last_digit - Prints last digit of a num
 * @n: Takes in an integer
 * Return: n
 */

int print_last_digit(int n)
{
	int l;

	if (n < 0)
	{
		n = -n;
	}
	l = n % 10;

	if (l < 0)
	{
		l = -l;
	}
	_putchar(l + '0');

	return (l);
}



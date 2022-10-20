#include "main.h"

/**
 * print_line - Draws a str line
 * @n: Takes in an integer
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('_');
	}
	else
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_to_98 - Prints numbers from 1 - 2
 * @n: Takes in an integer
 */

void print_to_98(int n)
{
	int i;

	for (i = 0; i < 98; i++)
	{
		_putchar(i);
		_putchar(',');
		_putchar('\n');
	}
	_putchar("\n");
}

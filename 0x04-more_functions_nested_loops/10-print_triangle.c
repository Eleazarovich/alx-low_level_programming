#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: Size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, k;

		for (i = 0; i < size; i++)
		{
			for (j = (size - 1 - i); j < size; j++)
			{
				_putchar(' ');
			}
			for (k = 0; < k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

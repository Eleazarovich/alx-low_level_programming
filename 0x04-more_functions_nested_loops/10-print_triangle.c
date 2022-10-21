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
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = i; < size; j++)
			{
				_putchar(' ');
			}
			for (j = 0; < j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

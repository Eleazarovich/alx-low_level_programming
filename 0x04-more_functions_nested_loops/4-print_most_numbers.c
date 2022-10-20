#include "main.h"

/**
 * print_most_numbers - Prints nums (0-9) except (2 & 4)
 */

void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
	}

	_putchar('\n');
}

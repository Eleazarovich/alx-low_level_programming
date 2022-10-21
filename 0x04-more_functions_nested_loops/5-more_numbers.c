#include "main.h"

/**
 * more_numbers - Prints 10x the nums (0 - 14)
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + 48);
			}
				_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}


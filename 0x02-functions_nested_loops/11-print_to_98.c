#include "main.h"

/**
 * print_to_98 - Prints numbers from 1 - 2
 * @n: Takes in an integer
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
	}
}
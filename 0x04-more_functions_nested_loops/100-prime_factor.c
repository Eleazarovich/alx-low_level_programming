#include <stdio.h>

/**
 * main - Finds the largest prime number for 612...
 * Return: Always 0.
 */

int main(void)
{
	long int x, y;

	x = 612852475143;

	for (y = 2; y < x; y++)
	{
		if (x % y == 0)
		{
			x /= y;
		}
	}
	printf("%ld\n", x);
	return (0);
}

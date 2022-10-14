#include <stdio.h>

/**
 * main - Prints all posible combi of single-digit nums.
 * Return: 0 for success
 */

int main(void)
{
	int i;

	i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{	putchar(44);
			putchar(32);
		}
		else
		{
			break;
		}
		i++;
	}
	putchar(10);

	return (0);
}

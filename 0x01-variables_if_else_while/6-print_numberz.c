#include <stdio.h>

/**
 * main - Prints numbers from 0-9 (base of 10)
 * Return: 0 for success
 */

int main(void)
{
	int i;

	i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}

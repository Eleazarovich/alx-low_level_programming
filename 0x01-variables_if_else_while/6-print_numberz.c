#include <stdio.h>

/**
 * main - Prints numbers from 0-9 (base of 10)
 * Return: 0 for success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar(10);

	return (0);
}

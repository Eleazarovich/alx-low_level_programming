#include "main.h"

/**
 * main - Prints a to z
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

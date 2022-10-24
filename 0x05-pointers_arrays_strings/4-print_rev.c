#include "main.h"

/**
 * print_rev - reverses a string
 * @s: takes string
 */


void print_rev(char *s)
{
	int a;

	a = 0;

	while(*(s + a))
		a++;
	a = a - 1;
	while (a >= 0)
	{
		_putchar(*(s + a));
		a--;
	}
	_putchar('\n');
}

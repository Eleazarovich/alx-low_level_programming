#include <stdio.h>

char _putchar(int c)
{
	return (putchar(c));
}

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	}	_putchar('\n');
}
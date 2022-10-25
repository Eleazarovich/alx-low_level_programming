#include "main.h"

/**
 * puts_half - prints half a string
 * @str: takes a char pointer
 */

void puts_half(char *str)
{
	int i, j, len, new_start;

	while (*(str + i) != '\0')
	{
		i++;
	}

	len = i;
	if (len % 2 == 0)
	{
		new_start = (len / 2);
	}
	else
	{
		new_start = ((len - 1) / 2);
	}

	j = len - new_start;

	while (*(str + j) != '\0')
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}


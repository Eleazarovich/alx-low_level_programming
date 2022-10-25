#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: takes in a char pointer
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (*(str + 1) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}

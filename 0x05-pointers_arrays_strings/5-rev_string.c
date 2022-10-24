#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: char pointer
 */

void rev_string(char *s)
{
	int len, mid_len, i;
	char c;

	len = _strlen(s);
	mid_len = (len / 2);

	for (i = 0; i < mid_len; i++)
	{
		c = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = c;
	}
	_putchar('\n');
}

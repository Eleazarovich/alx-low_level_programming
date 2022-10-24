#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: char pointer
 */

void rev_string(char *s)
{
	int len, mid_len;

	len = _strlen(s);
	mid_len = (len / 2);
	int i;

	char c;

	for (i = 0; j < mid_len; i++)
	{
		c = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = c;
	}
	_putchar('\n');
}

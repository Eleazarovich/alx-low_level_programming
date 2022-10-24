#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: char pointer
 */

void rev_string(char *s)
{
	int len, i;
	char c;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	for (i = 0; i  < (len / 2); i++)
	{
		i = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = a;
	}
}

#include "main.h"

/**
 * _atoi - converts a str to an int
 * @s: char *p
 * Return: int
 */

int _atoi(char *s)
{
	int i, j, k, l;

	j = 0;

	k = -1;

	l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			k = k * -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			j = j * 10;
			j -= (s[i] - '0');
			l = 1;
		}
		else if (l == 1)
		{
			break;
		}
		j = k * j;
		return (j);
	}
}



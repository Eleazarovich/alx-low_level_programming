#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: s
 */

char *leet(char *s)
{
	int i, j;
	char leets[] = "ol_ea_t";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; leets[j] != '\0'; j++)
		{
			if (s[i] == leets[j] || s[i] == (leets[j] - 32))
			{
				s[i] = j + 48;
			}
		}
	}
	return (s);
}

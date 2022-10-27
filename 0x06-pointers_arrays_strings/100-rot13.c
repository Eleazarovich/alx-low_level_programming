#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: s
 */

char *rot13(char *s)
{
	int i, j;
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == alpha[y])
			{
				s[i] = rot[y];
				break;
			}
		}
	}
	return (s);
}

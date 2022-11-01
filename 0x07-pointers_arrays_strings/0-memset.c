#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: str
 * @b: value
 * @n: bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}


#include "main.h"
#include <stdio.h>

/**
 * _strlen - calculates the length of a string
 * @s: string
 *
 * Return: the length of s
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2
 *
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, strlen1;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	strlen1 = _strlen(s1);

	s = malloc(sizeof(char) * strlen1 + n + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < strlen1; i++)
		s[i] = s1[i];

	for (i = 0; i < n; i++)
		s[strlen1 + i] = s2[i];

	return (s);
}

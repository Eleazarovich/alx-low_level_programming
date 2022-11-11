#include "main.h"

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
	char *nconcat_string;
	int i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	nconcat_string = malloc(sizeof(char) * _strlen(s1) + n + 1);

	if (nconcat_string == NULL)
		return (NULL);

	for (i = 0; i < _strlen(s1); i++)
		nconcat_string[i] = s1[i];

	for (i = 0; i < n; i++)
		nconcat_string[_strlen(s1) + i] = s2[i];

	return (nconcat_string);
}




























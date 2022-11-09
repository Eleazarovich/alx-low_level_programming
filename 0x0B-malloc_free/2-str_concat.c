#include "main.h"

/**
 * _strlen - calculates the length of a sting
 * @s: string
 *
 * Return: length of s
 */

int _strlen(char *s)
{
	int len, i;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	return (len);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int len_concat_str, i;

	len_concat_str = _strlen(s1) + _strlen(s2);

	concat_str = malloc(sizeof(char) * len_concat_str + 1);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < _strlen(s1); i++)
		concat_str[i] = s1[i];

	for (i = 0; i < _strlen(s2); i++)
		concat_str[_strlen(s1) + i] = s2[i];

	return (concat_str);
}

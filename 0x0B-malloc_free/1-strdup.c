#include "main.h"

/**
 * _strlen - calculates then lenth of of a string
 * @s: string
 *
 * Return: the length of a string
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
 * _strdup - returns a pointer to a new string (duplicate of str)
 * @str: string
 *
 * Return: duplicate of str
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i;

	if (str == NULL)
		return (NULL);

	if (!(duplicate = malloc(sizeof(char) * _strlen(str) + 1)))
		return (NULL);

	i = 0;

	while (*str)
		duplicate[i++] = *str++;
	duplicate[i] = '\0';
	return (duplicate);
}

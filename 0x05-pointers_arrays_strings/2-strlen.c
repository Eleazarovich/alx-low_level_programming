#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: takes a pointer as a parm
 * Return: length
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		len++;
	}
	return (len);
}

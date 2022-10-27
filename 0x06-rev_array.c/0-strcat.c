#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	int len_dest, len_src, i;

	len_dest = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len_dest += 1;
	}

	len_src = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		len_src += 1;
	}

	for (i = 0; i <= len_src; i++)
	{
		dest[len_dest + i] = src[i];
	}

	return (dest);
}



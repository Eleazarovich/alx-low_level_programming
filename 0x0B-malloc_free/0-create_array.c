#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of an array
 * @c: character
 *
 * Return: an array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(c) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	int i;

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);

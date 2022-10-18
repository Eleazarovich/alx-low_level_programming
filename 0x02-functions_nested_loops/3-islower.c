#include "main.h"

/**
 * _islower - Checks lowercase char
 * @c: Takes in a char
 * Return: 1 if is lowercase. 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

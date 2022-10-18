#include "main.h"

/**
 * _isalpha - Checks if a char is an alphabet
 * @c: Takes in a char
 * Return: 1 if char is letter. Otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * _isalpha - Checks if a char is an alphabet
 * @c: Takes in a char
 * Return: 1 if char is letter. Otherwise 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
}

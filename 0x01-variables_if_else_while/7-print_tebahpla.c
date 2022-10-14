#include <stdio.h>

/**
 * main - Prints alphabets in reverse z-a
 * Return: 0 for success
 */

int main(void)
{
	int alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar(10);

	return (0);
}

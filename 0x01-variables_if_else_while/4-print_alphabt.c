#include <stdio.h>

/**
 * main - Prints alphabts from a-z except q & j
 * Return: 0 for success
 */

int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'q' || alpha == 'e')
		{
			continue;
		}
		else
		{
			putchar(alpha);
		}
	}
	putchar(10);

	return (0);
}

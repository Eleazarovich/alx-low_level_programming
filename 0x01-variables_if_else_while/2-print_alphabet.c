#include <stdio.h>

/**
 * main - Prnts alphabets from a - z
 * Return: 0 for success
 */

int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar(10);

	return (0);
}

#include <stdio.h>

/**
 * main - Prints alphABET from aA - zZ
 * Return: 0 for success
 */

int main(void)
{
	int lca, uca;

	for (lca = 'a'; lca <= 'z'; lca++)
	{
		putchar(lca);
	}
	for (uca = 'A'; uca <= 'Z'; uca++)
	{
		putchar(uca);
	}

	putchar(10);

	return (0);
}

#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 * Return: 0 for success
 */

int main(void)
{
	int i, a;

	i = 48;
	a = 'a';

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}

	putchar(10);

	return (0);
}

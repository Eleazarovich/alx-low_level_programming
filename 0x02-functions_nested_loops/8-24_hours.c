#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 */

void jack_bauer(void)
{
	int i, j;

	i = 0;

	while (i < 24)
	{
		j = 0;
		{
			while (j < 60)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(':');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				putchar('\n');
				j++;
			}
			i++;
		}
	}
}

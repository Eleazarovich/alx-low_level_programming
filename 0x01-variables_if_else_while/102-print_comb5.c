#include <stdio.h>


int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(32);
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}

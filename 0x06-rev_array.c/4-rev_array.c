#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: takes in an array as a pointer
 * @n: elements of an array
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = (n - 1); i >= 0; i--)
	{
		if (i != 0)
		{
			printf("%d ,", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
}

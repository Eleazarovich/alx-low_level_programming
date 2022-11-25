#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t
 * @h: head of linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->new;
		count++;
	}
	return (count);
}


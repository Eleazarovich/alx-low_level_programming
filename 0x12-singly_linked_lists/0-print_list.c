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
	if (h == NULL)
		printf("[0] (nil)\n");

	size_t count;

	count = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}


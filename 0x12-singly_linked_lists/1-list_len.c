#include "lists.h"

/**
 * list_len - returns the number of elements in a linked `list_t list`
 * @h: head point to a linked list
 *
 * Return: number of elements in a list
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->new;
	}
	return (count);
}

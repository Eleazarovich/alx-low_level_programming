#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked `listint` list
 * @h: pointer pointing at the first node
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i;
	listint_t const *ptr = NULL;

	ptr = h;
	i = 0;

	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}



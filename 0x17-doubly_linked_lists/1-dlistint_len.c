#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked `dlistint` list
 * @h: points to dlistint_t
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count;

	temp = h;
	count = 0;

	while (temp != NULL)
	{
		count += 1;
		temp = temp->next;
	}
	return (count);
}

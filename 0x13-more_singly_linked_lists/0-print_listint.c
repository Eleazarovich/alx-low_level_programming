#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a `listint_t` list
 * @h: pointer pointing at the first node
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	listint_t const *ptr = NULL;

	ptr = h;

	i = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		i++;
		ptr = ptr->next;
	}
	return (i);
}

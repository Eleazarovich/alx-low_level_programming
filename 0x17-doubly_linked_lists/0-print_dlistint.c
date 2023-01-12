#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a `dlistint_t` list
 * @h: points to dlistint_t
 *
 * Return: the number of node
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count;

	temp = h;
	count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count += 1;
		temp = temp->next;
	}
	return (count);
}

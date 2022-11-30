#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a `listint_t` linked list
 * @head: pointer pointing at the first node
 * @index: index
 *
 * Return: NULL, if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr = NULL;

	i = 0;
	ptr = head;
	while (ptr != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}

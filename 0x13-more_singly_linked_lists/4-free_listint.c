#include "lists.h"

/**
 * free_listint - frees a `listint_t` list
 * @head: pointer pointing at the first node
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;

	while (ptr != NULL)
	{
		free(ptr);
		ptr = ptr->next;
	}
}

#include "lists.h"

/**
 * sum_listint - returns sum of all the data (n) of a `listint_t` linked list
 * @head: pointer pointing at the first node
 *
 * Return: 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);

	listint_t *ptr = NULL;
	int sum;

	ptr = head;
	sum = 0;

	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

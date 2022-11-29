#include "lists.h"

/**
 * pop_listint - deletes the head node of a `listint_t` linked list
 * @head: pointer pointing at the first node
 *
 * Return: 0 if linked list is empty otherwise, the head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_data;

	if (*head == NULL)
		return (0);

	temp = *head;
	head_data = (*head)->n;
	*head = (*head)->next;

	free(temp);
	temp = NULL;

	return (head_data);
}



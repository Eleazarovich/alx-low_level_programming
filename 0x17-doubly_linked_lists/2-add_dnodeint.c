#include "lists.h"

/**
 * add_dnodeint - adds a new node at beginning of `dlistint_t` list
 * @head: points to a pointer pointing to dlistint_t
 * @n: value to store in node
 *
 * Return: NULL if it failed. otherwise the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
		new->next = NULL;
	else
	{
		while ((*head)->prev)
			(*head)->prev = new;
		(*head)->prev = new;
		new->next = *head;
	}
	*head = new;

	return (*head);
}

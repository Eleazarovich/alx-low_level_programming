#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a `dlistint_t` list
 * @head: points to a pointer pointing to dlistint_t
 * @n: value to strore in node
 *
 * Return: the address of the new element. othewise NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	tmp = *head;

	if (tmp != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
		*head = new;

	new->prev = tmp;

	return (new);
}

#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a `listint_t` list
 * @head: pointer pointing at a pointer pointing at a first node
 * @n: integer to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	ptr = *head;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new_node;
	}

	return (*head);
}

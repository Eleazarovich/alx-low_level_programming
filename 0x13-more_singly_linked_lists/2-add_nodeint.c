#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of `listint_t` list
 * @head: pointer pointing at a pointer pointing at the first node
 * @n: integer to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	new_node->next = *head;
	*head = new_node;

	return (*head);
}

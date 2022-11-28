#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a `list_t` list
 * @head: pointer pointing to a head pointer of a linked list
 * @str: string to be added at the beginning of the list
 *
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	struct list_s *new = malloc(sizeof(struct list_s));

	new->str = strdup(str);
	new->next = NULL;

	new->next = *head;
	*head = new;

	return (new);
}

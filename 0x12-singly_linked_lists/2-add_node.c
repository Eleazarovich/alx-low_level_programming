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
	int count;

	for (count = 0; str[count] != '\0'; count++)
		;

	struct list_t *new = malloc(sizeof(struct list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
		return (NULL);

	new->len = count;
	new->next = *head;
	*head = new;

	return (*head);
}

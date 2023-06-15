#include "lists.h"

/**
 * insert_dnodeint_at_index - function that
 * inserts a new node at a given position.
 * @h: Double pointer to the head of the list.
 * @idx: index of the list where the new node should be added.
 * @n: integer data of the new node.
 * Return: address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	for (i = 0; temp != NULL && i < idx; i++)
		temp = temp->next;

	if (!temp && i == idx)
		return (add_dnodeint_end(h, n));

	if (!temp)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = temp->prev;
	new_node->next = temp;
	temp->prev->next = new_node;
	temp->prev = new_node;

	return (new_node);
}

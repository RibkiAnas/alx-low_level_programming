#include "lists.h"

/**
 * get_dnodeint_at_index - function that
 * returns the nth node of a dlistint_t
 * linked list.
 * @head: Pointer to the head of the list.
 * @index: index of the node to return.
 *
 * Return: nth node of the list, or NULL if it does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}

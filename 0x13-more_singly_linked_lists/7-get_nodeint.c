#include "lists.h"

/**
* get_nodeint_at_index - function that returns
* the nth node of a listint_t linked list.
* @head: pointer to the head of the list.
* @index: index of the node to return,
* starting at 0.
*
* Return: the nth node of a listint_t linked
* list, or NULL if it does not exist.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}

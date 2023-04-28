#include "lists.h"

/**
* listint_len - function that returns the
* number of elements in a linked listint_t list.
* @h: pointer to the head of a listint_t list.
*
* Return: returns the number of elements in a
* linked listint_t list.
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

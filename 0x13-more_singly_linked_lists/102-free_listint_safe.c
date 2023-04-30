#include "lists.h"

/**
* free_listint_safe - function that frees a
* listint_t list.
* @h: pointer to the head of the list.
*
* Return: the size of the list that was
* free’d The function sets the head to NULL.
*/
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int gap;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		gap = *h - (*h)->next;
		if (gap > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}
	*h = NULL;
	return (count);
}

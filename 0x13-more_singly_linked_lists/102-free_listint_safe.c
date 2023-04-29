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
	listint_t *temp;
	listint_t *slow, *fast;

	if (!h || !*h)
		return (count);

	slow = *h;
	fast = *h;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			while (*h)
			{
				temp = (*h)->next;
				free(*h);
				*h = temp;
				count++;
			}
			*h = NULL;
			return (count);
		}
	}
	while (*h)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		count++;
	}
	*h = NULL;
	return (count);
}

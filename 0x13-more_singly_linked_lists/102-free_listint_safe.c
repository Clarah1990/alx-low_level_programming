#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list
 * @h: a pointer to a pointer to the head of the list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t len = 0;
	int new;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		new = *h - (*h)->next;
		if (new > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}

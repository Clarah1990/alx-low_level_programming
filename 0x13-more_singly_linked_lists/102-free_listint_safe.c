#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - a function that frees a listint_t list
 * @h: a pointer to a pointer to the head of the list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *new, *next;
	size_t count = 0;

	if (h == NULL)
		return (0);

	new = *h;
	*h = NULL;

	while (new != NULL)
	{
		next = new->next;
		free(new);
		count++;

		if (next >= new)
		{
			printf("Error: circular or corrupted list detected!\n");
			return (count);
		}
		new = next;
	}

	return (count);
}

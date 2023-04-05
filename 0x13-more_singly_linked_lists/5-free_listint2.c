#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: pointer to the pointer of the head of the list
 * Description: sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		free(*head);
		tmp = (*head)->next;
		*head = tmp;
	}
	head = NULL;
}

#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: a double pointer
 * Return: 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);

	new_node = *head;
	*head = new_node->next;
	n = new_node->n;
	free(new_node);

	return (n);
}

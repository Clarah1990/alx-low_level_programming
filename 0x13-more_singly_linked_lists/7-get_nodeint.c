#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked lis
 * @head: pointer of the 1st node
 * @index: index of the node
 * Return: pointer of index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	if (head == NULL)
		return (NULL);
	for (j = 0; j < index; j++)
	{
		head = head->next;
	}
	return (head);
}

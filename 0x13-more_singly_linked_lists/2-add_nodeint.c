#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @n: the integer for the new node to contain
 * @head: a pointer to the address of the head of the list
 * Return: On success - the address of the new element, otherwise - NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

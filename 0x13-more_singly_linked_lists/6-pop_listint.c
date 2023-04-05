#include "lists.h"

/**
 * pop_listint - Deletes the pop out from linked list.
 * @head: Pointer to pointer to the first node of the list.
 * Return: The value of the deleted node, or 0 if empty.
 */

int pop_listint(listint_t **head)
{
	int name;
	listint_t *time;

	if (head == NULL || *head  == NULL)
		return (0);

	name = (*head)->n;
	time = *head;
	*head = (*head)->next;
	free(time);
	return (name);
}

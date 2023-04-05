#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at idx
 * @head: Pointer to pointer to the first node of the list.
 * @idx: position index
 * @n: data value
 * Return: sum of data or 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int add, int n)
{
	listint_t *age_n, *curr;
	unsigned int index;

	if (!head)
		return (NULL);

	if (add == 0)
	{
		age_n = malloc(sizeof(listint_t));
		if (age_n == NULL)
			return (NULL);
		age_n->n = n;
		age_n->next = *head;
		*head = age_n;
		return (age_n);
	}

	curr = *head;

	for (index = 0; index < add - 1 && curr; index++)
		curr = curr->next;

	if (!curr)
		return (NULL);

	age_n = malloc(sizeof(listint_t));
	if (age_n == NULL)
		return (NULL);
	age_n->n = n;
	age_n->next = curr->next;
	curr->next = age_n;
	return (age_n);
}

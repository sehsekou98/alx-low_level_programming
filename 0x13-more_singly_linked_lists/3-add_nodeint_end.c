#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a  list
 * @head: pointer to the head of the list
 * @n: value to be added to the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *age_n, *curr;

	if (head == NULL)
		return (NULL);

	age_n = malloc(sizeof(listint_t));

	if (age_n == NULL)
		return (NULL);

        age_n->n = n;
	age_n->next = NULL;

	if (*head == NULL)
		*head = age_n;
	else
	{
		curr = *head;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = age_n;
	}

	return (age_n);
}

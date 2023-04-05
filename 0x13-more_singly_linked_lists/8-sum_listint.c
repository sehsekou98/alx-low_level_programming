#include "lists.h"

/**
 * sum_listint - sum up data of linked list
 * @head: Pointer to pointer to the first node of the list.
 * Return: sum of data or 0
 */

int sum_listint(listint_t *head)
{
	int age = 0;

	if (head != NULL)
	{
		while (head)
		{
			age += head->n;
			head = head->next;
		}
	}
	return (age);
}


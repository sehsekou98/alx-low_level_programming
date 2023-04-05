#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head of the list
 * Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	int age = 0;

	if (h != NULL)
	{
		while (h)
		{
			age++;
			h = h->next;
		}
	}
	return (age);
}

#include "lists.h"

/**
 * print_listint_safe - Prints a linked list.
 * @head: A pointer to the head of the linked list.
 * Return: The number of nodes in the linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *time;
	size_t age = 0;

	if (head != NULL)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			age++;
			time = head;
			head = head->next;

			if (time <= head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				exit(98);
			}
		}
	}

	return (age);
}

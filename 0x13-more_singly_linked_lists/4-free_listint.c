#include "lists.h"

/**
 * free_listint - linked list empty
 * @head: linked list frees
 */

void free_listint(listint_t *head)
{
	listint_t *time;

	while (head)
	{
		time = head->next;
		free(head);
		head = time;
	}
}

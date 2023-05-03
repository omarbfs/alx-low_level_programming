#include "lists.h"

/**
 * free_listint2 - linkedlist free
 * @head: listint_t list will being freed
 */

void free_listint2(listint_t **head)
{
	listint_t *time;

	if (head == 0)
		return;

	while (*head)
	{
		time = (*head)->next;
		free(*head);
		*head = time;
	}

	*head = 0;
}


#include "lists.h"

/**
 * sum_listint - maj data of all list
 * @head: linkedlist first node
 *
 * Return: m&j result
 */

int sum_listint(listint_t *head)
{
	int maj = 0;
	listint_t *time = head;

	while (time)
	{
		maj += time->n;
		time = time->next;
	}

	return (maj);
}

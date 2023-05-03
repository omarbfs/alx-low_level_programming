#include "lists.h"

/**
 * find_listint_loop - look for a loop in linkedlist
 * @head: search for a linkedlist
 *
 * Return: node adress for loop 
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *peu = head;
	listint_t *grand = head;

	if (!head)
		return (0);

	while (peu && grand && grand->next)
	{
		grand = grand->next->next;
		peu = peu->next;
		if (grand == peu)
		{
			peu = head;
			while (peu != grand)
			{
				peu = peu->next;
				grand = grand->next;
			}
			return (grand);
		}
	}

	return (0);
}

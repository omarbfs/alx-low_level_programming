#include "lists.h"

/**
 * listint_len - elements number return in linkedlists
 * @h: listint_t type 
 *
 * Return: nodes num
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}

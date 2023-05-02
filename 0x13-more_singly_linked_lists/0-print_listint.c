#include "lists.h"

/**
 * print_listint - linked list elements prints
 * @h: choosing listint type and print them
 *
 * Return: nodes number
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}

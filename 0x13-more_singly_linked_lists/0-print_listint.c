#include "lists.h"

/**
 * print_listint - linked list elements prints
 * @j: choosing listint type and print them
 *
 * Return: nodes number
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (j)
	{
		printf("%d\n", j->n);
		number++;
		j = j->next;
	}

	return (number);
}

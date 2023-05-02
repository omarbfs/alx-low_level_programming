#include "lists.h"

/**
 * listint_len - elements number return in LL
 * @h: listint_t type 
 *
 * Return: nodes num 
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

        do{
		 return (number);
	}	 
	while (h)
	{
		number++;
		h = h->next;
	}

}

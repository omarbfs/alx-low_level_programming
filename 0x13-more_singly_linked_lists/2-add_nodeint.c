#include "lists.h"

/**
 * add_nodeint - nouveau node 
 * @head: first node pointer
 * @n: nouveau node data
 *
 * Return: directly to new node 
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nouveau;

	nouveau = malloc(sizeof(listint_t));
	if (!nouveau)
		return (0);

	nouveau->n = n;
	nouveau->next = *head;
	*head = nouveau;

	return (nouveau);
}

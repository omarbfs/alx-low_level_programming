#include "main.h"

/**
 * set_bit - ensembler le bit à l'indexà à 1
 * @n: le pointer d'un nmbre pour le changer
 * @index: L'index d'un bit à ensembler à 1
 *
 * Return: 1 pour reussir, -1 pour échec
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

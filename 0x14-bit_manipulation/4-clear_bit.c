#include "main.h"

/**
 * clear_bit - ensembler la valeur d'un bit à 0
 * @n: le pointer d'un nombre à changer
 * @index: L'index d'un bit à nettoyer
 *
 * Return: 1 pour reussir, -1 pour echec
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

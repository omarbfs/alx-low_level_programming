#include "main.h"

/**
 * get_bit - le retour de la valeur d'un bit a un nombre decimale
 * @n: nombre pour chercher
 * @index: L'index d'un bit
 *
 * Return: la valeur d'un bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_valeur;

	if (index > 63)
		return (-1);

	bit_valeur = (n >> index) & 1;

	return (bit_valeur);
}

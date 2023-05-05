#include "main.h"

/**
 * get_bit - bit value index in decimal num
 * @n: search number
 * @index: bit index
 *
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int V;

	if (index > 63)
		return (-1);

	V = (n >> index) & 1;

	return (V);
}

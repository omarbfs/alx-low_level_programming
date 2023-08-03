#include "main.h"

/**
 * flip_bits - counter le nombre des bits pour le changer
 * pour obtenir un nombre à l'autre
 * @n: premier nombre
 * @m: deuxieme nombre
 *
 * Return: nombre des bits pour le changer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, counter = 0;
	unsigned long int now;
	unsigned long int ex = n ^ m;

	for (y = 63; y >= 0; y--)
	{
		nox = ex >> y;
		if (now & 1)
			counter++;
	}

	return (counter);
}

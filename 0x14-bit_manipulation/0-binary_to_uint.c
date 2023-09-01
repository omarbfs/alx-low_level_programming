#include "main.h"

/**
 * binary_to_uint - converter les nombres binaires à unsigned int
 * @b: la line qui contient le nombre binaire
 *
 * Return: the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimale = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimale = 2 * decimale + (b[i] - '0');
	}

	return (decimale);
}

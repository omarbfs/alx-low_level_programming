#include "main.h"

/**
 * binary_to_uint - binar numbers to int
 * @b: the place of binary number
 *
 * Return: int number
 */

unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int N = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		N = 2 * N + (b[K] - '0');
	}

	return (N);
}

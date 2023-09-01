#include "main.h"

/**
 * print_binary - imprimer le nombre binaire d'un nombre decimale
 * @n: nombre decimale pour imprimer en binaire
 */
void print_binary(unsigned long int n)
{
	int j, counter = 0;
	unsigned long int now;

	for (j = 63; j >= 0; j--)
	{
		now = n >> j;

		if (now & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}

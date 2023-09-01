#include "main.h"

/**
 * get_endianness - tester la machine si a une big ou little endianess
 * Return: 0 pour big, 1 pour little
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}

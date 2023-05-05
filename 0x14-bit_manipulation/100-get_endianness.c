#include "main.h"

/**
 * get_endianness - little or big 
 * Return: big = 0 , little = 1 
 */

int get_endianness(void)
{
	unsigned int k = 1;
	char *n = (char *) &k;

	return (*n);
}

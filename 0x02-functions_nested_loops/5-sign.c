#include "main.h"


	/**
	 * prtint_sign - print a sign of a number
	 *
	 * @n: The value
	 *
	 * Return: 0 or 1 or -1 (Success)
	 */
	int print_sign(int n)
	{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		} else if (n == 0)
		{
			_putchar(48);
			return (0);
		} else if (n < 0)
		{
			_putchar('-');
		}
			return (-1);
	}

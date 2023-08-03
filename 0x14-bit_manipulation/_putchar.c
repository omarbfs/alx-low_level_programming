#include "main.h"
#include <unistd.h>
/**
 * _putchar - ecrire le charectere c 
 * @c: The character pour imprimer
 *
 * Return: en reussire 1.
 * en erreur, -1 est le reteur, et errno est now.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

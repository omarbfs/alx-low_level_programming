#include "main.h"

/**
 * append_text_to_file - appender un text a la fin d'un fichier.
 * @filename: un pointer sur le nom d'un fichier.
 * @text_content: un definition pour l'ajouter sur la fin d'un fichier..
 *
 * Return: si la fonction est down ou le nom de fichier n'existe pas - -1.
 *         si le fichier n'esxist pas - -1.
 *         autre - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

#include "main.h"

/**
 * create_file - Creer un fichier.
 * @filename: un pointer dans le nom de fichier creer.
 * @text_content: un pointer liee par la line dans le fichier.
 *
 * Return: di le fichier down 0.
 *         autre - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}

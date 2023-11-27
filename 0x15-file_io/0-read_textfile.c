#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- lire le tecte dans le fichier et printer out.
 * @filename: le depart de la lecture de fichier
 * @letters: nombre des lettres qui sont lu
 * Return: w- le nombre reel des octet qui sont lu
 *        0 si la fonction etre lu ou n'exist pas.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

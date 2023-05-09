#include "main.h"
#include <stdlib.h>



/**
 * read_textfile- Rd file for prints standard output
 * @filename: Rd fil’s text
 * @letters: letters numbers counted for being reading
 * Return: w- bytes number RD and prntd
 *        0 when function false
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

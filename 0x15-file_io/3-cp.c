#include "main.h"
#include <stdio.h>
#include <stdlib.h>


char *create_buffer(char *file);
void close_file(int fd);


/**
 * create_buffer - 1kb allocate for buffer
 * @file: name buffer’s file store characters
 *
 * Return: ptr for new buffer allocated
 */

char *create_buffer(char *file)
{

	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}


/**
 * close_file - ferme les descripteurs des fichiers
 * @fd: fichiers descptrs clsd
 */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}



/**
 * main - copier les donnees d’un fichier a autre fichier.
 * @argc: argmnts number supplie to prgrm
 * @argv: ptrs array to argmnts
 *
 * Return: null = success.
 *
 * Description: cod 97 exit for argmnts count incrrct
 * If file_cod 98 for dosen’t exist or readable
 * If file_cod 99 can’t written or creatd
 * If file_cod 100 can’t close the file
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);

}

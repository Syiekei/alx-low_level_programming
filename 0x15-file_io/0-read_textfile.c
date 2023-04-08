#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: number of letters the function should read and print.
 *
 * Return: read size.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buf;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(o);

	return (w);
}

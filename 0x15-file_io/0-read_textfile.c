#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - read text file
 * @filename: read textfile
 * @letters: value of letters
 * Return: results
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *x;
	ssize_t j;
	ssize_t i;
	ssize_t y;

	j = open(filename, O_RDONLY);
	if (j == -1)
		return (0);
	x = malloc(sizeof(char) * letters);
	y = read(j, x, letters);
	i = write(STDOUT_FILENO, x, y);
	free(x);
	close(j);
	return (i);
}

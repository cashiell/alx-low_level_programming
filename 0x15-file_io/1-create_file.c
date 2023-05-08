#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to create
 * @text_content: A pointer
 *
 * Return: results
 */
int create_file(const char *filename, char *text_content)
{
	int x, y, j = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (j = 0; text_content[j];)
			j++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(x, text_content, j);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}

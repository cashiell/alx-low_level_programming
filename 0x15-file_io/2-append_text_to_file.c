#include "main.h"
/**
 * append_text_to_file - appends the end file text
 * @filename: file name pointer
 * @text_content: string
 * Return: results
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x;
	int y;
	int j = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (j = 0; text_content[j];)
		j++;
	}
	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, j);
	if (x == -1 || y == -1)
		return (-1);
	close(x);
	return (1);
}

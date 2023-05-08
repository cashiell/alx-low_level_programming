#include <stdlib.h>
#include "main.h"
#include <stdio.h>
void end_file(int x);
char *generate_j(char *y);
/**
 * generate_j - allocates bytes
 * @y: file name to store char
 * Return: a pointer
 */
char *generate_j(char *y)
{
	char *j;

	j = malloc(sizeof(char) * 1024);
	if (j == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", y);
		exit(99);
	}
	return (j);
}
/**
 * end_file - close all files
 * @x: the file variable to close
 */
void end_file(int x)
{
	int i;

	i = close(x);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can'r close x %d\n", x);
		exit(100);
	}
}
/**
 * main - duplicate contents of file
 * @argc: arguments number supplied
 * @argv: an array vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int amid;
	int via;
	int x, y;
	char *j;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from filr_to\n");
		exit(97);
	}
	j = generate_j(argv[2]);
	amid = open(argv[1], O_RDONLY);
	x = read(amid, j, 1024);
	via = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (amid == -1 || x == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(j);
			exit(98);
		}
		y = write(via, j, x);
		if (via == -1 || y == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(j);
			exit(99);
		}
		x = read(amid, j, 1024);
		via = open(argv[2], O_WRONLY | O_APPEND);
	} while (x > 0);
	free(j);
	end_file(amid);
	end_file(via);
	return (0);
}

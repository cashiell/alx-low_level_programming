#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * free_grid - write a function that free a 2 dimentional grid
 * previosly created by the function
 * @grid: grid variable
 * @height: dimentional height
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}

#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array
 * @array: array
 * @size: number of element
 * @action: print in reguler or hex
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t x;

	if (array && action)
	{
		x = 0;
	
		while (x < size)
		{
			action (array[x]);
			x++;
		}
	}
}

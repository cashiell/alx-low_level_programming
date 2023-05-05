#include "main.h"
/**
 * get_bit - return value of a bit at index
 * @n: variable to search
 * @index: bit index
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > 63)
		return (-1);
	x = (n >> index) & 1;
	return (x);
}

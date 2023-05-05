#include "main.h"
/**
 * set_bit - sets bit at given index
 * @n: pointer
 * @index: bit index
 *
 * Return: 1 success and on failure -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}

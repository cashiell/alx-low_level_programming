#include "main.h"
/**
 * clear_bit - sets value of given bit
 * @n: pointer
 * @index: bit index
 * Return: 1 on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}

#include "main.h"
/**
 * flip_bits - count the number of bits
 * @n: initial value
 * @m: seconf value
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, y;
	unsigned long int i;
	unsigned long int j = n ^ m;

	y = 0;
	for (x = 63; x >= 0; x--)
	{
		i = j >> x;
		if (i & 1)
			y++;
	}
	return (y);
}

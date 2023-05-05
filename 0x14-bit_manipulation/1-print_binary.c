#include "main.h"
/**
 * print_binary - prints the binary equivalent to decimal
 * @n: variable to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int x, j;
	j = 0;
	unsigned long int i;

	for (x = 63; x >= 0; x--)
	{
		i = n >> x;
		if (i & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}

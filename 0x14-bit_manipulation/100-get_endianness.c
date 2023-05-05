#include "main.h"
/**
 * get_endianness - check machines endian
 * Return: o
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *j = (char *) &x;

	return (*j);
}

#include "main.h"
/**
 * _pow_recursion - return x raised to power y
 * @x: base variable
 * @y: power variable
 * Return: result function
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

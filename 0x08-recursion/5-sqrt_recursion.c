#include "main.h"

int real_sqrt_recursion(int x, int y);
/**
 * _sqrt_recursion - returns the natural square root of number
 * @n: input variable
 *
 * Return: result function
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}
/**
 * real_sqrt_recursion - get the real natural root after
 * recursion occured
 * @x: variable x to find the square root
 * @y: varible to loop through collection
 *
 * Return: function results
 */
int real_sqrt_recursion(int x, int y)
{
	int square;

	square = y * y;
	if (square > x)
		return (-1);
	if (square == x)
		return (y);
	return (real_sqrt_recursion(x, y + 1));
}

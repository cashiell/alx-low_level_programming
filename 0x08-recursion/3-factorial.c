#include "main.h"
/**
 * factorial - return the factorial of given number
 * @n: variable
 *
 * Return: factorial of input n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

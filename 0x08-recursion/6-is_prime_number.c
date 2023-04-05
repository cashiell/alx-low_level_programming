#include "main.h"

int real_prime(int x, int y);

/**
 * is_prime_number - returns 1 if the integer is a prime number
 * otherwise return o
 * @n: variable to check
 *
 * Return: 1 if a prime and else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}
/**
 * real_prime - evaluate if input number is prime
 * @x: variable to check
 * @y: loops through collections
 *
 * Return: results
 */
int real_prime(int x, int y)
{
	if (y == 1)
		return (1);
			if (x % y == 0 && y > 0)
				return (0);
	return (real_prime(x, y - 1));
}

#include "main.h"

int eval_results(char *x, int y, int z);
int _leng_recursion(char *x);

/**
 * is_palindrome - retrun 1 if string is a palindrome and o if not
 * @s: variable string
 *
 * Return: 1 if true and 0 if false
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (eval_results(s, 0, _leng_recursion(s)));
}

/**
 * _leng_recursion - return string length
 * @x: evaluate string
 *
 * Return: string length
 */
int _leng_recursion(char *x)
{
	if (*x == '\0')
		return (0);
	return (1 + _leng_recursion(x + 1));
}

/**
 * eval_results - check palindrome for recursion
 * @x: evaluate string
 * @y: loop
 * @z: string length
 *
 * Return: 1 if true, 0 if false
 */
int eval_results(char *x, int y, int z)
{
	int a;
	int b;

	a = *(x + y);
	b = *(x + z - 1);

	if (a != b)
		return (0);
	if (y >= z)
		return (1);
	return (eval_results(x, y + 1, z - 1));
}

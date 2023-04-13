#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"
/**
 * is_digit - checks string contains non-digit char
 * @s: string to check
 *
 * Return: 0
 */
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}
/**
 * _strlen - returns string length
 * @s: string to check
 *
 * Return: length
 */
int _strlen(char *s)
{
	int y = 0;

	while (s[y] != '\0')
	{
		y++;
	}
	return (y);
}
/**
 * errors - handle arror
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multufly two numbers
 * @argc: arguments number
 * @argv: vector array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *x, *y;
	int l_1, l_2, l, i, c, d1, d2, *r, a = 0;

	x = argv[1], y = argv[2];
	if (argc != 3 || !is_digit(x) || !is_digit(y))
		errors();
	l_1 = _strlen(x);
	l_2 = _strlen(y);
	l = l_1 + l_2 + 1;
	r = malloc(sizeof(int) * l);
	if (!r)
		return (1);
	for (i = 0; i <= l_1 + l_2; i++)
		r[i] = 0;
	for (l_1 = l_1 - 1; l_1 >= 0; l_1--)
	{
		d1 = x[l_1] - '0';
		c = 0;
		for (l_2 = _strlen(y) - 1; l_2 >= 0; l_2--)
		{
			d2 = y[l_2] - '0';
			c += r[l_1 + l_2 + 1] + (d1 * d2);
			r[l_1 + l_2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			r[l_1 + l_2 + 1] += c;
	}
	for (i = 0; i < l - 1; i++)
	{
		if (r[i])
			a = 1;
		if (a)
			_putchar(r[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}

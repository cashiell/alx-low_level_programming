#include "main.h"
/**
 * _atoi - convert string to integer
 * @s:input string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i, j;
	unsigned int x = 0;

	i = 1;
	j = 0;
	while (!(s[j] <= '9' && s[j] >= '0') && s[j] != '\0')
	{
		if (s[j] == '-')
			i *= -1;
		j++;
	}
	while (s[j] <= '9' && (s[j] >= '0' && s[j] != '\0'))
	{
		x = (x * 10) + (s[j] - '0');
		j++;
	}
	x *= i;
	return (x);
}

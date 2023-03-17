#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n, m;

	n = 0;
	while (n <= 8)
	{
		m = n + 1;
		while (m <= 9)
		{
			putchar(n + 48);
			putchar(m + 48);
			if (n != 8)
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}

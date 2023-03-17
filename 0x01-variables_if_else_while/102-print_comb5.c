#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a, b, c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (c <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				putchar(a + 48);
				putchar(b + 48);
				putchar(c + 48);
				if (a < 7)
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}

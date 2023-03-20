#include <stdio.h>
/**
 * main - write a function that print the alphabet,in lowercase
 *
 * Return: 0 (success)
 */
void print_alphabet(void)
{

	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
}

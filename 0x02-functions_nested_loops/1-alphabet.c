#include <stdio.h>
/**
 * main - write a function that print the alphabet,in lowercase
 *
 * Return: 0 (success)
 */
int print_alphabet(void)
{

	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
}

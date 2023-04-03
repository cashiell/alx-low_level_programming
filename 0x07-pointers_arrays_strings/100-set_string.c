#include "main.h"
/**
 * set_string - write a function that sets the value of a pointer to a char
 * @s: input pointer with pointer
 * @to: input pointer character
 *
 * Return: success
 */
void set_string(char **s, char *to)
{
	*s = to;
}

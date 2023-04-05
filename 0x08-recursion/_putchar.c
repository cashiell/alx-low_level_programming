#include "main.h"
#include <unistd.h>
/**
 * _putchar - print char c to standard output
 * @c: the variable that print
 *
 * Return: 1 (success)
 * and return -1 on error and set errno appropriately
 */
int _putchar(char c)

{
	return(write(1, &c, 1));
}

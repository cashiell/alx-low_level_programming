#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print everything
 * @format: all argument type
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *i, *j = "";

	va_list y;

	va_start(y, format);

	if (format)
	{
	while (format[x])
	{
	switch (format[x])
	{
		case 'c':
	printf("%s%c", j, va_arg(y, int));
	break;
	case 'x':
	printf("%s%d", j, va_arg(y, int));
	break;
	case 'f':
	printf("%s%f%", j, va_arg(y, double));
	break;
	case 's':
	i = va_arg(y, char *);
	if (!i)
		i = "(nil)";
	printf("%s%s", y, i);
	break;
	default:
	x++;
	continue;
	}
	j = ",";
	x++;
	}
	}
	printf("\n");
	va_end(y);
}

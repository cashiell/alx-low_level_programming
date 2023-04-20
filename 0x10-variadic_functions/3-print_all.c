#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *x, *j = "";

	va_list y;

	va_start(y, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", j, va_arg(y, int));
					break;
				case 'i':
					printf("%s%d", j, va_arg(y, int));
					break;
				case 'f':
					printf("%s%f", j, va_arg(y, double));
					break;
				case 's':
					x = va_arg(y, char *);
					if (!x)
						x = "(nil)";
					printf("%s%s", j, x);
					break;
				default:
					i++;
					continue;
			}
			j = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(y);
}

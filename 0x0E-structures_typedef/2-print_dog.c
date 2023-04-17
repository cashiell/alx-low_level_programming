#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - print struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d -> n == NULL)
		d -> n = "(nil)";
	if (d -> o == NULL)
		d -> o = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d -> n, d-> a, d-> o);
}

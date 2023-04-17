#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - type struct dog initialization
 * @d: pointer
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *n, float a, char *o)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d -> n = n;
	d -> a = a;
	d -> o = o;
}

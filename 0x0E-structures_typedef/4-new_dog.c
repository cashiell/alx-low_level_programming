#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - return length of string
 * @s: evaluate string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * *_strcpy - copies string pointed to by src
 * @dest: buffer pointer
 * @src: string to copy
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int x, y;

	x = 0;
	while (src[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < x; y++)
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int l_1, l_2;

	l_1 = _strlen(name);
	l_2 = _strlen(owner);

	d = malloc(sizeof(char) * (l_1 + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (l_2 + 1));
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;
	return (d);
}


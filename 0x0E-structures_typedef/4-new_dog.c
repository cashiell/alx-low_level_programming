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
 * @n: name of the dog
 * @a: dog age
 * @o: dog owner
 *
 * Return: pointer
 */
dog_t *new_dog(char *n, float a, char *o)
{
	dog_t *d;
	int l_1, l_2;

	l_1 = _strlen(n);
	l_2 = _strlen(o);

	d = malloc(sizeof(char) * (l_1 + 1));
	if (d -> n == NULL)
	{
		free(d);
		return (NULL);
	}
	d -> o = malloc(sizeof(char) * (l_2 + 1));
	if (d -> o == NULL)
	{
		free(d);
		free(d -> n);
		return (NULL);
	}
	_strcpy(d -> n, n);
	_strcpy(d -> o, o);
	d -> a = a;
	return (d);
}


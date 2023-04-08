#include "main.h"

/**
 * _strcat - put strings together
 * @dest: input value
 * @src: input value
 *
 * Return:empty
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}

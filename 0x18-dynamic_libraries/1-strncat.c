#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: char str
 * @src: char str
 * @n: number of elements
 * Return: pointer to resulting dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (y = 0; src[y] != '\0' && n > 0; y++, n--, x++)
	{
		dest[x] = src[y];
	}
	return (dest);
}

#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: character  string
 * @src: character string
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, x;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[i] = src[x];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

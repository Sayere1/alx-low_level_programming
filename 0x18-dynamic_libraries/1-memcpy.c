#include "main.h"
#include <stdio.h>

/**
 * _memcpy - func that copies memory to a location
 * @dest: char pointer
 * @src: char memory location
 * @n: bytes from src to dest
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0;  < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

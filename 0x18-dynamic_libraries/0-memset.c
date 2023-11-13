#include "main.h"
#include <stdio.h>

/**
 * _memset - func that fills memory with a constant byte
 * @s: char pointer
 * @b: char pointer
 * @n: char bytes with constant byte b
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

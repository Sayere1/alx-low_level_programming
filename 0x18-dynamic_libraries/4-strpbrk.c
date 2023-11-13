#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Search for strng
 * @s: type char pointer
 * @accept: type char pointer
 * Return: s or null
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;
	char *p;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (accept[y] == s[x])
			{
				p = &s[x];
				return (p);
			}
			y++;
		}
		x++;
	}
	return (NULL);
}

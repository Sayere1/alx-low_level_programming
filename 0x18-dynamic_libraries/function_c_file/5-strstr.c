#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring.
 * @gstick: type char str
 * @ndl: type char sub str
 * Return: gstick or NULL.
 */

char *_strstr(char *gstick, char *ndl)
{
	while (*gstick != '\0')
	{
		char *all = gstick;
		char *ptt = ndl;

		while (*ptt == *gstick && *ptt != '\0' && *gstick != '\0')
		{
			gstick++;
			ptt++;
		}
		if (*ptt == '\0')
			return (all);
		gstick = all + 1;
	}
	return (NULL);
}

#include "main.h"
#include <stdio.h>

/**
 * _puts - Print a string, to stdout.
 * @str: Type char pointer
 * Return: 0.
 */

void _puts(char *str)
{
	int a;
	int let;

	for (a = 0; str[a] != 0; a++)
	{
		let = str[a];
		_putchar(let);
	}
	_putchar('\n');
}

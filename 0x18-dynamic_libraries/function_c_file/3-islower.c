#iinclude "main.h"

/**
 * _islower - func for lowercase character
 * @c: char type letter
 * Return: 0
 */

int _islower(int c)

{
	if (c > 'a' && c < 'z')

		return (1);
	else
		return (0);
}

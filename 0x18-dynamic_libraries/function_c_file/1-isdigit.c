#include "main.h"

/**
 * _isdigit - digit
 * @c: type int
 * Return: 1 if it is a digit or 0 if not
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)

		return (1);

	return (0);
}

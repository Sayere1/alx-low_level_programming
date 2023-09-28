#include "main.h"

/**
 * binary_to_uint - Write a fntn that converts a binary num to an unsigned int
 * @b: char string.
 *
 * Return: 0 if ther is 1 or mr chars in the stng, b tht is nt 0, 1 or b is NUL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int xi;
	int len, base_10;

	if (!b)
		return (0);

	xi = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_10 = 1; len >= 0; len--, base_10 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			xi += base_10;
		}
	}

	return (xi);
}

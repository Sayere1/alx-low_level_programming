#include "main.h"

/**
 * _isupper - chk for upper case characters.
 * @c: int character
 * Return:  1 for uppercase, otherwise 0.
 */

int _isupper(int c)
{

		if (c > 64 && c < 91)
			return (1);

			return (0);
}

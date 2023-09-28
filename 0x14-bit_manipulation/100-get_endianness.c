#include "main.h"

/**
 * get_endianness - Write a function that checks the endianness
 *
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int p;
	char *c;

	p = 1;
	c = (char *) &p;

	return ((int)*c);
}

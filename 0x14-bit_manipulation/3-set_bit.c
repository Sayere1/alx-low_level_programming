#include "main.h"

/**
 * set_bit - Write a function that sets value of a bit to 1 at a given index
 * @n: decimal number passed by pointer
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int n;

	if (index > 128)
		return (-1);

	for (n = 1; index > 0; index--, n *= 2)
		;
	*n += n;

	return (1);
}

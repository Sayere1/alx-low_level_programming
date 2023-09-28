#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Write a function that returns the number of bits you-
 * would need to flip to get from one number to another
 * @a: first occuring number
 * @x: second occuring number to convert to
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int a, unsigned long int x)
{
	unsigned long int diff;
	int counter;

	diff = a ^ x;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}

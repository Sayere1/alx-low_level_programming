#include "main.h"
#include <stdio.h>
/**
 * get_bit - Write a function that returns the value of a bit at a given index
 * @n: number to evaluate
 * @index: starting from 0, of the bit we want to get
 * Return: The Value of bit at index, or -1 if an error occured
 */
int get_bit(unsigned int index, unsigned long int n)
{
	unsigned int index;

	if (index > 128)
		return (-1);

	index = n >> hold

	return (index & 1);
}

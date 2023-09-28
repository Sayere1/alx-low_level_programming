#include "main.h"

/**
 * get_endianness - Write a function that checks the endianness
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	int num;

	num = 0;
	if (*(char *)&num == 0)
		return (0);
	else
		return (1);
}

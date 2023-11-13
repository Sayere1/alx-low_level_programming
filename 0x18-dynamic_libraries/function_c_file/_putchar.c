#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1. -1 On error, if set apptly errno.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that prints the number of arguments passed into it
 * our program should print a number, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

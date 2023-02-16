#include <stdio.h>
/**
 * main - Write a C program that prints the size of various types
 * Return: 0 (Success)
 */
int main(void)
{
	char w;
	int x;
	long int y;
	long long int z;
	float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(w));
printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(x));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}

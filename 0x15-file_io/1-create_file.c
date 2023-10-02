#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: Pointer to the name of the file to create.
 * @text_content: Pointer to a string to write to the file.
 *
 * Return: If the function fails - -1 or - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int x, y, len = 2;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 2; text_content[len];)
			len++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(x, text_content, len);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}

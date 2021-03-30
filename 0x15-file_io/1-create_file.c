#include "holberton.h"

/**
 * create_file - Creates a textfile.
 * @filename: name of the file we're going to create
 * @text_content: The content of the file we're going to create
 *
 * Return: -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int opening, writing, count = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[count] != '\0')
		count++;

	opening = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (opening == -1)
		return (-1);

	if (count != 0)
	{
		writing = write(opening, text_content, count);
		if (writing == -1)
			return (-1);
	}

	close(opening);

	return (1);
}

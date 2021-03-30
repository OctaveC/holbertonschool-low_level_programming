#include "holberton.h"

/**
 * append_text_to_file - Append text to the end of a file.
 * @filename: name of the file we're going to add text to
 * @text_content: The text we're going to append to the file
 *
 * Return: -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opening, writing, count = 0;

	if (filename == NULL)
		return (-1);

	if (!text_content)
	text_content = "";

	while (text_content[count] != '\0')
		count++;

	opening = open(filename, O_RDWR | O_APPEND);
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

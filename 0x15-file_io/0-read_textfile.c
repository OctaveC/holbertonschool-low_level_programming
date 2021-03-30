#include "holberton.h"

/**
 * read_textfile - Reads text file and prints it to the POSIX standard output.
 * @filename: name of the file we're going to read
 * @letters: how many letters of the file we're going to read
 *
 * Return: 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int opening, reading, writing;
	char *buffer;

	if (filename == NULL)
		return (0);

	opening = open(filename, O_RDONLY);
	if (opening == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	reading = read(opening, buffer, letters);
	if (reading == -1)
	{
		free(buffer);
		return (0);
	}

	writing = write(STDOUT_FILENO, buffer, reading);
	if (reading == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(opening);

	return (writing);
}

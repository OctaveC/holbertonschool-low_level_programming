#include "holberton.h"

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments
 * @argv: Array containing the arguments
 *
 * Return: error code if it fails
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, reading, writing, check;
	char *buffer[1024];

	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);

	reading = read(file_from, buffer, 1024);
	if (reading == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

	while (reading > 0)
	{
		writing = write(file_to, buffer, reading);
		if (writing == -1)
			dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
		reading = read(file_from, buffer, 1024);
		if (reading == -1)
			dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}

	check = close(file_from);
	if (check == -1)
		dprintf(2, "Error: Can't close fd %d\n", check), exit(100);

	check = close(file_to);
	if (check == -1)
		dprintf(2, "Error: Can't close fd %d\n", check), exit(100);

	return (0);
}

#include "holberton.h"
#include <elf.h>

/**
 * main - displays information in the ELF header at the start of an ELF file.
 * @argc: Number of arguments
 * @argv: Array containing the arguments
 *
 * Return: error code if it fails, 0 if succeeds
 */
int main(int argc, char *argv[])
{
	int opening, reading, check;
	Elf64_Ehdr *head;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	opening = open(argv[1], O_RDONLY);
	if (opening == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	head = malloc(sizeof(Elf64_Ehdr));
	if (!head)
		dprintf(STDERR_FILENO, "Error: Memory allocation issue %s\n"), exit(98);

	reading = read(opening, head, sizeof(Elf64_Ehdr));
	if (reading == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	check = close(opening);
	if (check == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", opening), exit(98);
	return (0);
}

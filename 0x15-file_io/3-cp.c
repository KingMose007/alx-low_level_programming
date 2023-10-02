#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * main - it copies the contents of file to another
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 97, 98, 99 or 100 on error.
 */
int main(int argc, char *argv[])
{
	int from, to, r;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	from = open(argv[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
		close(from), dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((r = read(from, buffer, BUFFER_SIZE)) > 0)
		if (write(to, buffer, r) == -1)
			close(from), close(to), dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	if (r == -1)
		close(from), close(to), dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	if (close(from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);
	if (close(to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100);
	return (0);
}

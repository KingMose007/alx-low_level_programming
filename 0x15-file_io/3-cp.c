#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * main - the entry point
 * @argc: Number of arguments
 * @argv: Arguments
 *
 * Return: 0 on success, 97, 98, 99 or 100 on error
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	struct stat st;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]), exit(97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	if (stat(argv[2], &st) == -1)
		fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
				S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	else
		fd_to = open(argv[2], O_WRONLY | O_TRUNC);
	if (fd_to == -1)
		close(fd_from), dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
		if ((bytes_written = write(fd_to, buffer, bytes_read)) == -1)
			close(fd_from), close(fd_to), dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	if (bytes_read == -1)
		close(fd_from), close(fd_to), dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}

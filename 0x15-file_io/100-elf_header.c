#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFSIZE 1024

/**
 * copy_file - copies the content of a file to another file
 * @file_from: the name of the file to copy from
 * @file_to: the name of the file to copy to
 *
 * Return: 0 on success, or an exit code on failure
 */
int copy_file(char *file_from, char *file_to)
{
	int fd_from, fd_to;
	ssize_t n_read, n_written;
	char buffer[BUFSIZE];
	mode_t mode;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		return (dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from), 98);

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
		return (dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), close(fd_from), 99);

	while ((n_read = read(fd_from, buffer, BUFSIZE)) > 0)
		if ((n_written = write(fd_to, buffer, n_read)) == -1 || n_written != n_read)
			return (dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), close(fd_from), close(fd_to), 99);

	if (n_read == -1)
		return (dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from), close(fd_from), close(fd_to), 98);

	if (close(fd_from) == -1)
		return (dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), close(fd_to), 100);

	if (close(fd_to) == -1)
		return (dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), 100);

	return (0);
}

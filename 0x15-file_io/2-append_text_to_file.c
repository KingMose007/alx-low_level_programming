#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - code that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length]; length++)
			;
		bytes_written = write(fd, text_content, length);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}


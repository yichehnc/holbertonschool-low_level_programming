#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - Appends a file
 *
 * @filename: Name of the text file
 * @text_content: NULL terminated string to write to the file
 *
 * Return: Creates a file and returns 1, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int fd;
	ssize_t file_written;

	i = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
	{
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[i] != '\0')
	{
		i = i + 1;
	}
	file_written = write(fd, text_content, i);

	if (file_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
	}
}
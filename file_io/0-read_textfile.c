#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 *
 * @filename: Name of the text file
 * @letters: Number of letters in text file
 *
 * Return: Actual number of letters it can read and print, else return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_read;
	ssize_t file_written;
	int fd;
	char buf[10001];

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	file_read = read(fd, buf, letters);

	if (file_read == -1)
	{
		return (0);
	}

	file_written = write(STDOUT_FILENO, buf, file_read);

	if ((file_written == -1) | (file_read != file_written))
	{
		return (0);
	}
	close(fd);
	return (file_written);
}

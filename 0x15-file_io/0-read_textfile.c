#include "main.h"

/**
 * read_textfile - read a certain size and prints to std output
 * @filename: file to read from
 * @letters: size to read
 * Return: actual size read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* file descriptor */
	ssize_t n_read, n_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* open the file stream */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* create a buffer to allocate memory space */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* read from file */
	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* write to standard output */
	n_write = write(STDOUT_FILENO, buffer, n_read);
	if (n_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (n_read);

}

#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int s;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	s = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(s, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(s);
	return (bytes);
}

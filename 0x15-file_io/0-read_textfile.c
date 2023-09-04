#include "main.h"

/**
 * read_textfile - reads a textfile
 * @filename: the name of the file / path
 * @letters: the number of letters to read
 *
 * Description: reads a text file and prints it to the POSIX standard output.
 *
 * Return: number of letters it could read and print or 0 on fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fp, i;

	if (!filename || !letters)
		return (0);

	fp = open(filename, O_RDONLY);
	buf = malloc(letters);
	if (fp == -1 || !buf)
		return (0);

	i = read(fp, buf, letters);
	if (i == -1)
		return (0);
	write(STDOUT_FILENO, buf, i);

	free(buf);
	close(fp);
	return (i);
}

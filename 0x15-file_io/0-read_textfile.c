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
	size_t i;
	char c;
	int fp, p;

	if (!filename)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	p = read(fp, &c, 1);
	for (i = 0; p > 0 && i < letters; p = read(fp, &c, 1), i++)
	{
		if (write(1, &c, 1) <= 0)
		{
			close(fp);
			return (0);
		}
	}
	close(fp);
	return (p < 0 ? 0 : (ssize_t) i);
}

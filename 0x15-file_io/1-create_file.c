#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file / path
 * @text_content: the text to fill the file with
 *
 * Return: 1 on succes -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fp;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (0);
	while (text_content && *text_content)
	{
		if (write(fp, text_content++, 1) <= 0)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}

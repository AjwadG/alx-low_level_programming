#include "main.h"


/**
 * serror - print eror to stdror
 * @s: case
 * @a: pointer to string
 */
void serror(int s, char *a)
{
	if (s == 0)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", a);
		exit(97);
	}
	else if (s == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a);
		exit(98);
	}
	else if (s == 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", a);
		exit(99);
	}
}

/**
 * close_err - close if error print
 * @n: fp
 */
void close_err(int n)
{
	if (close(n) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", n);
		exit(100);
	}
}
/**
 * main - check the code
 * @ac: number of args
 * @av: a pointer to string pointers
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int f[2], i = 0, p;
	char buf[1024];
	mode_t p2 = 0664;

	if (ac != 3)
		serror(0, av[0]);
	f[0] = open(av[1], O_RDONLY);
	if (f[0] == -1)
		serror(1, av[1]);
	f[1] = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, p2);
	if (f[1] == -1)
	{
		close_err(f[0]);
		serror(2, av[2]);
	}
	p = read(f[0], &buf[i], 1024);
	while (p > 0)
	{
		if (write(f[1], buf, p) < 0)
		{
			close_err(f[0]);
			close_err(f[1]);
			serror(2, av[2]);
		}
		p = read(f[0], &buf[i], 1024);
	}
	if (p == -1)
	{
		close_err(f[0]);
		close_err(f[1]);
		serror(1, av[1]);
	}
	close_err(f[0]);
	close_err(f[1]);
	return (0);
}

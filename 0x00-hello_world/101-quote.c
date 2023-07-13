#include <unistd.h>
#include <string.h>

/**
 * main - entry level
 *
 * Description: print a string using write from unistd header
 *
 * Return: 1
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, strnlen(str, sizeof(str)));

	return (1);
}

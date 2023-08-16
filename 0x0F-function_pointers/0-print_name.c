#include "function_pointers.h"

/**
 * print_name - fucntion that prints name useing other functions
 *
 * @name: the nsame as string to print
 * @f: apointer to fcuntion that prints the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}

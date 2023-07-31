#include "main.h"
#include <stdio.h>
/**
 * set_string - function
 *
 * @s: a pointer to a pointer to a string.
 * @to: a pointer to string .
 *
 * Description: sets the value of a pointer (s) to a char (to).
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}

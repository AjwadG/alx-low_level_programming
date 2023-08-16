#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 *
 * @s: the oprator
 *
 * Return: apointer to a function or NULL if not match
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s[0] == ops[i].op[0] && s[1] == ops[i].op[1])
			return (ops[i].f);
		i++;
	}
	return (ops[5].f);
}

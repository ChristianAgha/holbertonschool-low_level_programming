#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - function that selects the correct function to perform
 * the operation asked by the user
 * @s: operator to be used
 * Return: a pointer to the function that corresponds to the operator given
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;

	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0] && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * prnt_char - prints the char list memeber
 * @va_chr: input list char
 * Return: void
 */
void prnt_char(va_list va_chr)
{
	printf("%c", va_arg(va_chr, int));
}
/**
 * prnt_int - prints the int list memeber
 * @va_int: input integer
 * Return: void
 */
void prnt_int(va_list va_int)
{
	printf("%d", va_arg(va_int, int));
}
/**
 * prnt_float - prints the float list member
 * @va_float: input float
 * Return: void
 */
void prnt_float(va_list va_float)
{
	printf("%f", va_arg(va_float, double));
}
/**
  * prnt_string - prints the string list memeber
  * @va_string: input string
  * Return: void
  */
void prnt_string(va_list va_string)
{
	char *string;

	string = va_arg(va_string, char *);
	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}
/**
 * print_all - prints all the inputs it's given
 * @format: a string that holds the formats key for the inputs
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list valist;
	arg_t frmt[] = {
		{"c", prnt_char},
		{"i", prnt_int},
		{"f", prnt_float},
		{"s", prnt_string},
		{NULL, NULL}
	};

	va_start(valist, format);
	i = 0;

	while (format && format[i])
	{
		j = 0;
		while (frmt[j].type != NULL)
		{
			if (*frmt[j].type == format[i])
			{
				frmt[j].f(valist);
				if (format[i + 1] != '\0')
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
}

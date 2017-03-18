#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints strings
 * @separator: the seperator between the strings
 * @n: the amount of strings to be printed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	unsigned int count;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(valist, char *) == NULL)
			printf("(nil)");
		else
		{
			va_end(valist);
			va_start(valist, n);
			for (count = i; count > 0; count--)
				va_arg(valist, char *);
			printf("%s", va_arg(valist, char *));
		}
			if (i < (n - 1) && separator != '\0')
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}

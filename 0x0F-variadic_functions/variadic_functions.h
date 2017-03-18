#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
#define VALIDTYPE(i) (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's') 
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct type - struct for input
 * arg_t - typedef for type
 * @type: input char
 * @f: input string
 */
typedef struct type
{
	char *type;
	void (*f)();
} arg_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif

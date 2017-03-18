#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
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
	char type;
	void (*f)();
} arg_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void prnt_char(va_list va_chr);
void prnt_int(va_list va_int);
void prnt_float(va_list va_float);
void prnt_string(va_list va_string);
void print_all(const char * const format, ...);
#endif

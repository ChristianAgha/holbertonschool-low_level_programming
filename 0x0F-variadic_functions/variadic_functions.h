#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * type - struct
 *
 * @c: input char
 * @s: input string
 */
typedef struct type
{
	char *type;
	void (*f)();
} arg_t;
#endif

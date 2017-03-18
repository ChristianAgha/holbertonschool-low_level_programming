#ifndef VARIADIC_H
#define VARIADIC_H
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

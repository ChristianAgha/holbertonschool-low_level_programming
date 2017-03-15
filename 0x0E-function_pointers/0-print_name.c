/**
 * print_name - prints a name
 * @name: input string
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

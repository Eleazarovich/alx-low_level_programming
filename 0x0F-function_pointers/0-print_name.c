#include "main.c"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

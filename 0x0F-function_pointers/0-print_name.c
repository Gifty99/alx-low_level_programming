#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: input name
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

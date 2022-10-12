#include "function_pointers.h"
#include <stdio.h>

/**
 * Print_name - function that prints a name
 * @name: name to print
 * @f: pointer to a functionthat uses to print a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

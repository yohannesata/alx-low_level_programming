#include "main.h"

/**
 * _strlen_recursion - returns lenght of string
 * @s: lenght of string to be returned.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0');
	return 0;
	return (_strlen_recursion(s + 1) + 1);
}
